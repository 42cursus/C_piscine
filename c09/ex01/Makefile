# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelov <abelov@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/10 22:49:46 by abelov            #+#    #+#              #
#    Updated: 2024/03/10 22:49:48 by abelov           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#https://www.gnu.org/software/make/manual/html_node/Empty-Recipes.html
#https://www.gnu.org/software/make/manual/html_node/Last-Resort.html
#https://www.gnu.org/software/make/manual/html_node/Special-Targets.html
#https://www.gnu.org/software/make/manual/html_node/Goals.html
#https://www.gnu.org/software/make/manual/html_node/Special-Variables.html

NAME			:= libft.a
CC				:= cc
INCLUDE_FLAGS	:= -I. -I/usr/include
LIBRARY_FLAGS	:= -lbsd
OPTIMIZE_FLAGS	:= -O0
DEBUG_FLAGS		:= -g3 -gdwarf-3
MANDATORY_FLAGS	:= -Wall -Wextra -Werror
CFLAGS			= $(MANDATORY_FLAGS) $(DEBUG_FLAGS) $(OPTIMIZE_FLAGS)

CTAGS			:= ctags
LIB_COMMAND		:= ar rcs
RM				:= /bin/rm

SRC_FILES 		:= ft_putchar.c \
					ft_putstr.c \
					ft_strcmp.c \
					ft_strlen.c \
					ft_swap.c
SRCS			= $(SRC_FILES:%.c=srcs/%.c)
OBJS			= $(SRCS:%.c=%.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(DEBUG_FLAGS) $(INCLUDE_FLAGS) -c $^ -o $@

$(NAME): $(OBJS)
		$(LIB_COMMAND) $(NAME) $(OBJS)

clean:
		$(RM) -f $(OBJS)

fclean: clean
		$(RM) -fr $(NAME)

re: fclean all

.DEFAULT_GOAL	:= re
$(warning default goal is $(.DEFAULT_GOAL))

.DEFAULT:
	@echo Goal $@ is not found!

# define an empty recipe for target
# useful is to prevent a target from getting implicit recipes
# (from implicit rules or the .DEFAULT special target;
target: ;

.PHONY: all clean flean re $(BUILD_DIR)
