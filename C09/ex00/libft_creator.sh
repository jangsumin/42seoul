# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sumijang <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/30 09:45:25 by sumijang          #+#    #+#              #
#    Updated: 2022/04/30 09:46:45 by sumijang         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c *.c && ar rc libft.a *.o && rm *.o && ranlib libft.a
