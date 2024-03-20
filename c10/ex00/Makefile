# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelov <abelov@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/20 16:19:04 by abelov            #+#    #+#              #
#    Updated: 2024/03/20 16:19:05 by abelov           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			:= ft_display_file
CC				:= cc
INC_DIR			=  ./include
INCLUDE_FLAGS	:= -I. -I $(INC_DIR) -I/usr/include
OPTIMIZE_FLAGS	:= -O0
DEBUG_FLAGS		:= -g3 -gdwarf-3
MANDATORY_FLAGS	:= -Wall -Wextra -Werror
CFLAGS			= $(MANDATORY_FLAGS) $(DEBUG_FLAGS) $(OPTIMIZE_FLAGS)

LIBFT_PATH		=  ./lib/ft
LIBFT			=  $(LIBFT_PATH)/libft.a

LINK_FLAGS		:= -L $(LIBFT_PATH) -lft

RM 				:= /bin/rm -rfv

BUILD_DIR		= build
SRC_DIR			= src
OBJ_DIR			= $(BUILD_DIR)/obj

SRC_FILES	 		:= main.c
SRCS	 		:= $(SRC_FILES:%.c=$(SRC_DIR)/%.c)
OBJS			= $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: $(NAME) test

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCLUDE_FLAGS) -o $@ -c $<

$(LIBFT):
			@make -C $(LIBFT_PATH) -j8

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(INCLUDE_FLAGS) -o $@ $^  $(LINK_FLAGS)

test: $(NAME)
	printf '\033[36m%s\033[0m\n' 'this is a test'
	./$(NAME) test/map1.txt

clean:
		@$(RM) -fr $(OBJ_DIR)
		@make -C $(LIBFT_PATH) clean

fclean: clean
		@$(RM) -fr $(NAME) $(BUILD_DIR) a.out
		@make -C $(LIBFT_PATH) fclean

re: fclean all

norm:
		@norminette $(SRCS)
		@make -C $(LIBFT_PATH) norm
		@make -C $(LIBSQ_PATH) norm

.PHONY: all clean test re
