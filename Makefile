CC              := gcc
FLAGS           :=  -std=c11 -Wall -Werror -Wextra -std=c11 #-g -fsanitize=address 
INC_DIRS        := -I.
TEST_FLAGS      := -lcheck  $(shell pkg-config --cflags --libs check) -lm -lpthread 
COV_FLAGS       := --coverage 

LIB_DIR         := lib/
TESTS_DIR       := tests/
COV_DIR         := coverage_info/
OBJ_DIR         := obj/
LIB_OBJ_DIR     := $(OBJ_DIR)$(LIB_DIR)
COV_OBJ_DIR     := $(COV_DIR)$(OBJ_DIR)

LIB_HEADER      := s21_math.h
LIB_SRCS        := $(wildcard lib/s21_*.c)
TEST_SRCS       := $(wildcard tests/*.c)

LIB_OBJS        := $(patsubst %.c,\
                              $(OBJ_DIR)%.o,\
                              $(LIB_SRCS))
COV_OBJS        := $(patsubst %.c,\
                              $(COV_OBJ_DIR)%.o,\
                              $(LIB_SRCS))

LIB_STATIC      := s21_math.a
TEST_EXEC       := test_main 
COV_EXEC        := $(COV_DIR)test_cov

COV_INFO        := $(COV_DIR)s21_math.info
COV_REPORT      := $(COV_DIR)lib/index.html

vpath %.c $(LIB_DIR)

.PHONY: all test gcov_report clean 

all: clean test gcov_report

test: $(TEST_SRCS) $(LIB_STATIC)
	$(CC) $(FLAGS) $(INC_DIRS) $^ $(TEST_FLAGS) -o  $(TEST_EXEC)
	leaks -atExit -- ./$(TEST_EXEC)

gcov_report: $(TEST_SRCS) $(COV_OBJS)
	$(CC) $(FLAGS) $(INC_DIRS) $(COV_FLAGS) $^ $(TEST_FLAGS) -o $(COV_EXEC)
	@-./$(COV_EXEC)
	@lcov -q -c -d  $(COV_DIR) -o $(COV_INFO) --exclude "$(TESTS_DIR)*" 
	@genhtml   $(COV_INFO) -o $(COV_DIR) 
	@open $(COV_REPORT)

$(LIB_STATIC): $(LIB_OBJS)
	@ar -rc $@ $^
	@ranlib $@

# Compile object files for static lib
$(LIB_OBJ_DIR)%.o: %.c $(LIB_HEADER)
	@mkdir -p $(LIB_OBJ_DIR)
	$(CC) $(FLAGS) $(INC_DIRS) -c $< -o $@

# Compile object files for coverage report
$(COV_OBJ_DIR)%.o: %.c $(LIB_HEADER)
	@mkdir -p $(COV_OBJ_DIR)$(LIB_DIR)
	@$(CC) $(FLAGS) $(INC_DIRS) $(COV_FLAGS) -c $< -o $@


clean:
	@-rm -rf $(OBJ_DIR) $(LIB_STATIC) $(TEST_EXEC) $(COV_DIR)\
		     *.dSYM *.gcda *.gcno *.gcov
			 
clean2 all:
	rm -rf  $(OBJ_DIR)  *.dSYM *.gcda *.gcno *.gcov *.a test_main
