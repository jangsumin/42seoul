# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sumijang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/30 10:21:55 by sumijang          #+#    #+#              #
#    Updated: 2022/04/30 12:02:33 by sumijang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBC = ar rc
LIBR = ranlib
INC = includes
OBJ = ${SRC:.c=.o}
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strlen.c srcs/ft_strcmp.c
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
NAME = libft.a

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INC}

${NAME} : ${OBJ}
	${LIBC} ${NAME} ${OBJ}
	${LIBR} ${NAME}

all :  ${NAME}

clean :
	${RM} ${OBJ}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re .c.o
