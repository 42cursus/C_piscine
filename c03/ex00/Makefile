# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelov <abelov@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/10 22:01:51 by abelov            #+#    #+#              #
#    Updated: 2024/03/10 22:01:53 by abelov           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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

main: main.c

%:	%.c
	$(CC) $(CFLAGS) -o $@ $< $(LIBRARY_FLAGS)

.PHONY: tests
test:
	echo
	./main ABC ABB

.PHONY: clean
clean:
	rm -rf a.out;
	rm -rf *.o;
	rm -rf *~ main;

