# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cpost <cpost@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2023/02/06 11:26:47 by cpost         #+#    #+#                  #
#    Updated: 2023/03/06 17:03:55 by cpost         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#=====================================#
#========= General variables =========#
#=====================================#

NAME = Polymorphism
OBJS_DIR = objs

#=====================================#
#============ Input files ============#
#=====================================#

SRCS = 	main.cpp\
		Animal.cpp\
		Cat.cpp\
		Dog.cpp\
		WrongAnimal.cpp\
		WrongCat.cpp

OBJS = $(SRCS:.c=.o)

#=====================================#
#========= Command arguments =========#
#=====================================#

CC = c++
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
