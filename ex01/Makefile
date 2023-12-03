# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kichlee <kichlee@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 13:53:49 by kichlee           #+#    #+#              #
#    Updated: 2023/12/03 17:31:21 by kichlee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ZombieHorde
CC		=	c++ 
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -rf
SRCS	=	Zombie.cpp \
			ZombieHorde.cpp \
			main.cpp
OBJS	=	${SRCS:.c=.o}

all	:
	@$(MAKE)  $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean :
	@$(RM)

fclean : clean
	@$(RM) $(NAME)

re :
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY : all clean fclean re