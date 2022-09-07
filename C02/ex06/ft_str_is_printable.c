/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:41:34 by sumijang          #+#    #+#             */
/*   Updated: 2022/04/20 21:32:23 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("ex06\n");
    char ex06_arr1[] = "asdg";
	char ex06_arr2[] = "ASNLTLKAT";
	char ex06_arr3[] = "한국";
	char ex06_arr4[] = "";
    printf("arr1 : %s\n%d\n", ex06_arr1, ft_str_is_printable(ex06_arr1));
    printf("arr2 : %s\n%d\n", ex06_arr2, ft_str_is_printable(ex06_arr2));
    printf("arr3 : %s\n%d\n", ex06_arr3, ft_str_is_printable(ex06_arr3));
    printf("arr4 : %s\n%d\n", ex06_arr4, ft_str_is_printable(ex06_arr4));
}
*/
