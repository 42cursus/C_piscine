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

NAME			:= libft.a
CC := cc
INCLUDE_FLAGS	:= -I. -I/usr/include
LIBRARY_FLAGS	:= -lbsd
OPTIMIZE_FLAGS	:= -O0
DEBUG_FLAGS		:= -g3 -gdwarf-3
CFLAGS = -Wall -Wextra -Werror $(OPTIMIZE_FLAGS)

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

.PHONY: all clean flean re $(BUILD_DIR)