# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frdescam <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/08 17:53:33 by frdescam          #+#    #+#              #
#    Updated: 2021/02/21 14:20:56 by ltouret          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SUFFIXES:
.SUFFIXES: .c .o

SHELL		= /bin/sh

NAME		= megaphone

SRCS		= megaphone.cpp

OBJS		= $(SRCS:.cpp=.o)

CPPC		= clang++

RM			= rm -f

CPPFLAGS	= -Wall -Wextra -Werror

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
