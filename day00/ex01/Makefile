# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/21 14:42:55 by ltouret           #+#    #+#              #
#    Updated: 2021/06/06 15:54:11 by ltouret          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SUFFIXES:
.SUFFIXES: .c .o

SHELL		= /bin/sh

NAME		= phonebook

SRCS		= Contact.cpp main.cpp

OBJS		= $(SRCS:.cpp=.o)

CPPC		= clang++

RM			= rm -f

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

all:	${NAME}

%.o: %.cpp
		${CPPC} ${CPPFLAGS} -c $< -o $@

$(NAME): ${OBJS}
		${CPPC} ${OBJS} -o ${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean
	make all

.PHONY : all clean fclean re
