# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sumijang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 23:13:25 by sumijang          #+#    #+#              #
#    Updated: 2022/05/04 16:28:25 by sumijang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_doop.c srcs/ft_add.c srcs/ft_sub.c srcs/ft_mul.c srcs/ft_mod.c srcs/ft_atoi.c srcs/ft_div.c srcs/ft_putnbr.c
OBJS = ${SRCS:.c=.o}
NAME = do-op
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} $^ -o $@

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all clean

.PHONY: all clean fclean re
