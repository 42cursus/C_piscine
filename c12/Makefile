# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelov <abelov@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/21 00:49:56 by abelov            #+#    #+#              #
#    Updated: 2024/03/21 00:49:56 by abelov           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR		= src
TESTS_DIR	= $(SRC_DIR)/tests

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

#============  BASH  =============#
SHELL		:= /bin/bash
#NLIST = $(shell for x in {1..$(words $(SRCS))}; do echo $$x; done)
#NLIST = $(shell for (( i = 1; i <= $(words $(SRCS)); i++ )); do echo $$i; done;)

#=========== POSIX SH ============#
SHELL		:= /bin/sh
NLIST		= $(shell for j in $$(seq $(words $(SRCS))); do echo $$j; done)
ILIST		= $(shell for j in $$(seq -w 0 $(words $(SRCS))); do echo $$j; done)
LIST		= $(foreach x,$(NLIST), ex$(word $(x),$(ILIST))/$(word $(x),$(SRCS)))

#=========== TEST FILES ============#
TESTS		= $(SRCS:%.c=$(TESTS_DIR)/%_test.c)
TEST		= $(SRCS:%.c=%_test)

all: $(LIST) $(TESTS)

some:
	@echo $(TEST)

# For `$(@D)` and `$(@D)` explanations see:
#	https://www.gnu.org/software/make/manual/html_node/Automatic-Variables.html
#
# From https://blog.robertelder.org/use-vim-inside-a-unix-pipe-like-sed-or-awk/
# `vim $@ -esnN -c ':Stdheader' -c 'wq!'`:
#    -e: Starts Vim in "ex" mode. In this mode, Vim behaves more
# like the classic Unix text editor "ex" rather than its full-screen mode.
#    -s: Runs Vim in "silent" mode. This suppresses most normal messages.
#    -n: Starts Vim in "no-compatible" mode. This flag disables compatibility
# mode, allowing Vim to use its extended features.
#    -N: Similar to -n, this flag also starts Vim in "no-compatible" mode
# but with the exception that it disables the use of the vi defaults.
#    -c <command>: Executes the command after the first file has been read.
$(LIST):
	@mkdir -pv $(@D)
	@echo creating $(@F)
	@touch $@
	@vim $@ -esnN -c ':Stdheader' -c 'wq'

$(TESTS):
	@mkdir -pv $(@D)
	@echo creating $(@F)
	@touch $@
	@vim $@ -esnN -c ':Stdheader' -c 'wq'

.PHONY: all some