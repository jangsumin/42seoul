/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 12:16:28 by sumijang          #+#    #+#             */
/*   Updated: 2022/04/20 17:58:42 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
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
	printf("ex04\n");
    char ex04_arr1[] = "asdg";
	char ex04_arr2[] = "atsljljkSDTNL";
	char ex04_arr3[] = "51235 sdtlna ;kl";
	char ex04_arr4[] = "";
    printf("arr1 : %s\n%d\n", ex04_arr1, ft_str_is_lowercase(ex04_arr1));
    printf("arr2 : %s\n%d\n", ex04_arr2, ft_str_is_lowercase(ex04_arr2));
    printf("arr3 : %s\n%d\n", ex04_arr3, ft_str_is_lowercase(ex04_arr3));
    printf("arr4 : %s\n%d\n", ex04_arr4, ft_str_is_lowercase(ex04_arr4));
}
*/
