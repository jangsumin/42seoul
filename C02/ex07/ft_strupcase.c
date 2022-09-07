/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 23:08:50 by sumijang          #+#    #+#             */
/*   Updated: 2022/04/20 19:36:10 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	printf("ex07\n");
    char ex07_str[] = "Hello I'm hunpark!!";
    printf("before str : %s\n", ex07_str);
	printf("after str : %s\n\n", ft_strupcase(ex07_str));
}
*/
