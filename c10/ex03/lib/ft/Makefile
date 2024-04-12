# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelov <abelov@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/20 16:19:45 by abelov            #+#    #+#              #
#    Updated: 2024/03/20 16:19:46 by abelov           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libft.a
CC			:= cc
CFLAGS		:= -Wall -Wextra -Werror
INC_DIR		=  ./include

INCLUDES	:= -I. -I $(INC_DIR)
DEBUG_FLAGS	:= -g3 -gdwarf-3
CFLAGS		+= $(DEBUG_FLAGS) $(INCLUDES)
LINK_FLAGS	:= -L $(LIBFT_PATH)/build -lft

LIB_COMMAND	:= ar rcs
RM 			:= /bin/rm -rfv

SRCS	 	:=
DIRS		:= ft_libio ft_string

include $(addsuffix /Makefile.mk,$(DIRS))

BUILD_DIR	=  build
BIN_DIR		=  .
OBJ_DIR		=  $(BUILD_DIR)/obj

OBJS			= $(SRCS:%.c=%.o)
BUILD_OBJS		= $(SRCS:%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(OBJ_DIR)/%.o:	%.c
		@mkdir -pv $(@D)
		$(CC) $(CFLAGS) $(DEBUG_FLAGS) $(INCLUDES) -c $^ -o $@

$(NAME): $(BUILD_OBJS)
		$(LIB_COMMAND) $(NAME) $(BUILD_OBJS)

clean:
		$(RM) -f $(OBJS) $(ASM_FILES)

fclean: clean
		$(RM) -fr $(NAME) $(BUILD_DIR) a.out

re: fclean all

norm:
		@norminette $(SRCS)

.PHONY: all clean flean re bonus norm
