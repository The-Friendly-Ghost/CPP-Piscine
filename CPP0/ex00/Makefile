# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cpost <cpost@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2023/01/24 17:00:11 by cpost         #+#    #+#                  #
#    Updated: 2023/01/24 17:41:14 by cpost         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#=====================================#
#========= General variables =========#
#=====================================#

NAME = megaphone
# INCLUDE_DIR := include
# SRC_DIR := src
OBJS_DIR = objs

#=====================================#
#============ Input files ============#
#=====================================#

# INC := -I $(INCLUDE_DIR)

SRCS = megaphone.cpp

OBJS = $(SRCS:.c=.o)

#=====================================#
#========= Command arguments =========#
#=====================================#

CC = clang++
CFLAGS = -Wall -Werror -Wextra -I -std=c++98 # -g $(INC)

#=====================================#
#=============== Rules ===============#
#=====================================#

all: $(NAME)
	
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all re run clean fclean