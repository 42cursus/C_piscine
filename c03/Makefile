# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelov <abelov@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/28 02:59:58 by abelov            #+#    #+#              #
#    Updated: 2024/03/28 02:59:59 by abelov           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Set some vars for our architecture
uname_s := $(shell uname -s)

ifeq ($(uname_s),Linux)
SHELL			:= /bin/bash
endif

CC := clang
INCLUDE_FLAGS	:= -I/usr/include -I./include
LIBRARY_FLAGS	:= -lbsd
OPTIMIZE_FLAGS	:= -O3
DEBUG_FLAGS		:= -g3 -gdwarf-3
WARNING_FLAGS	:= -Wall -Wextra -Werror
CFLAGS			= $(DEBUG_FLAGS) $(INCLUDE_FLAGS) $(OPTIMIZE_FLAGS) $(WARNING_FLAGS)

SRCS    	= ft_create_elem.c \
				ft_list_push_front.c \
				ft_list_size.c \
				ft_list_last.c \
				ft_list_push_back.c \
				ft_list_push_strs.c \
				ft_list_clear.c \
				ft_list_at.c \
				ft_list_reverse.c \
				ft_list_foreach.c \
				ft_list_foreach_if.c \
				ft_list_find.c \
				ft_list_remove_if.c \
				ft_list_merge.c \
				ft_list_sort.c \
				ft_list_reverse_fun.c \
				ft_sorted_list_insert.c \
				ft_sorted_list_merge.c

TESTS = basic_test

.PHONY: all
all:	clean main $(TESTS)

main: ft_strncmp_test.o
	$(CC) $(CFLAGS) -o $@ $< $(LIBRARY_FLAGS)

%.o:	%.c
	$(CC) $(CFLAGS) -c -o $@ $< $(LIBRARY_FLAGS)

.PHONY: tests
basic_test: main
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

