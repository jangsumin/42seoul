# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sumijang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/30 10:21:55 by sumijang          #+#    #+#              #
#    Updated: 2022/05/01 16:23:14 by sumijang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INC = includes
OBJ = ${SRC:.c=.o}
SRC = srcs/sad_pisciner.c srcs/starfish.c srcs/luffy.c srcs/ft_putstr.c srcs/main.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
NAME = rush-02
NORMINETTE = norminette
NORMOBJ = ${SRC}

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INC}

${NAME} : ${OBJ}
	${CC} ${CFLAGS} $^ -o $@

all :  ${NAME}

clean :
	${RM} ${OBJ}

fclean : clean
	${RM} ${NAME}

re : fclean all clean

norm : 
	${NORMINETTE} ${NORMOBJ}

.PHONY : all clean fclean re norm .c.o
