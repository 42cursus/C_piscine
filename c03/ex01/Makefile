#
#	FILE NAME: Makefile
#
#	FILE DESCRIPTION: Make description file for building 42 programs
#
#	PROJECT NAME: c03
#
#	PROJECT VERSION: v0.1.0
#

# Set some vars for our architecture
uname_s := $(shell uname -s)

ifeq ($(uname_s),Linux)
SHELL := /bin/bash
endif

CC := clang
INCLUDE_FLAGS	:= -I/usr/include
LIBRARY_FLAGS	:= -lbsd
OPTIMIZE_FLAGS	:= -O3
DEBUG_FLAGS		:= -g
WARNING_FLAGS	:= -Wall -Wextra -Werror
CFLAGS = $(DEBUG_FLAGS) $(INCLUDE_FLAGS) $(OPTIMIZE_FLAGS) $(WARNING_FLAGS)

TESTS = \
	basic_test

.PHONY: all
all:	clean main test

main: ft_strncmp_test.c

%:	%.c
	$(CC) $(CFLAGS) -o $@ $< $(LIBRARY_FLAGS)

.PHONY: tests
test:
	printf '\033[36m%s\033[0m\n' 'this is in cyan'
	./a.out test_ft_strchr ABC B
	./main ABCdawdz ABBdawdw 2
	./main ABCwdpwd O 3
	./main ABC OBBdawdw 3
	./main ABCwdawd ABBdawdw 1
	./main A ABBdawdw 5

.PHONY: clean
clean:
	rm -rf a.out;
	rm -rf *.o;
	rm -rf *~ main;

