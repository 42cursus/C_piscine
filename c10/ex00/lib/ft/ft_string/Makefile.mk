# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile.mk                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelov <abelov@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/20 20:39:48 by abelov            #+#    #+#              #
#    Updated: 2024/03/20 20:39:49 by abelov           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES	= ft_strlen.c
SRCS    += $(FILES:%.c=$(dir $(lastword $(MAKEFILE_LIST)))%.c)
