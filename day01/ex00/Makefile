# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ltouret <ltouret@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/21 14:42:18 by ltouret           #+#    #+#              #
#    Updated: 2021/02/21 14:42:22 by ltouret          ###   ########.fr        #
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
