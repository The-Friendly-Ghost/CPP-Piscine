# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cpost <cpost@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2023/02/06 16:35:29 by cpost         #+#    #+#                  #
#    Updated: 2023/02/16 16:29:13 by cpost         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#=====================================#
#========= General variables =========#
#=====================================#

NAME = HI_THIS_IS_BRAIN
OBJS_DIR = objs

#=====================================#
#============ Input files ============#
#=====================================#

SRCS = 	main.cpp

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