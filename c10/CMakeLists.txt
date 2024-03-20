# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    CMakeLists.txt                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abelov <abelov@student.42london.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/20 16:15:04 by abelov            #+#    #+#              #
#    Updated: 2024/03/20 16:15:05 by abelov           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cmake_minimum_required(VERSION 3.8.2)

cmake_policy(SET CMP0048 NEW) # PROJECT_VERSION

project(C10 VERSION 0.1.0 LANGUAGES C CXX ASM)

add_subdirectory(ex00)
