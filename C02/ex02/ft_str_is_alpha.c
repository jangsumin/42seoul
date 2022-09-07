/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 11:33:24 by sumijang          #+#    #+#             */
/*   Updated: 2022/04/20 17:39:06 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
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
	printf("ex02\n");
    char ex02_arr1[] = "asdg";
	char ex02_arr2[] = " a663dtsljljk at;kzcgk";
	char ex02_arr3[] = "51235 sdtlna ;kl";
	char ex02_arr4[] = "";
	printf("arr1 : %s\n%d\n", ex02_arr1, ft_str_is_alpha(ex02_arr1));
    printf("arr2 : %s\n%d\n", ex02_arr2, ft_str_is_alpha(ex02_arr2));
    printf("arr3 : %s\n%d\n", ex02_arr3, ft_str_is_alpha(ex02_arr3));
    printf("arr4 : %s\n%d\n", ex02_arr4, ft_str_is_alpha(ex02_arr4));
}
*/
