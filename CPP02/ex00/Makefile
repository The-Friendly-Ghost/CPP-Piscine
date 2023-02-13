# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cpost <cpost@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2023/02/06 11:26:47 by cpost         #+#    #+#                  #
#    Updated: 2023/02/13 16:49:27 by cpost         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#=====================================#
#========= General variables =========#
#=====================================#

NAME = My_First_Class_In_Canonical_Form
OBJS_DIR = objs

#=====================================#
#============ Input files ============#
#=====================================#

SRCS = 	main.cpp\
		Fixed.cpp

OBJS = $(SRCS:.c=.o)

#=====================================#
#========= Command arguments =========#
#=====================================#

CC = clang++
CFLAGS = -Wall -Werror -Wextra -I -std=c++98

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