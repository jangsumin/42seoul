/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 11:49:51 by sumijang          #+#    #+#             */
/*   Updated: 2022/04/20 17:56:03 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
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
	printf("ex03\n");
    char ex03_arr1[] = "asdg";
	char ex03_arr2[] = " a663dtsljljk at;kzcgk";
	char ex03_arr3[] = "12125136";
	char ex03_arr4[] = "";
    printf("arr1 : %s\n%d\n", ex03_arr1, ft_str_is_numeric(ex03_arr1));
    printf("arr2 : %s\n%d\n", ex03_arr2, ft_str_is_numeric(ex03_arr2));
    printf("arr3 : %s\n%d\n", ex03_arr3, ft_str_is_numeric(ex03_arr3));
    printf("arr4 : %s\n%d\n", ex03_arr4, ft_str_is_numeric(ex03_arr4));
}
*/
