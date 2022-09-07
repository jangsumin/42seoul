/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 23:17:08 by sumijang          #+#    #+#             */
/*   Updated: 2022/04/20 19:50:29 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	prev;

	i = 0;
	prev = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (prev == 1)
			{
				str[i] -= 32;
				prev = 0;
			}
		}
		else if (str[i] >= 48 && str[i] <= 57)
			prev = 0;
		else
			prev = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
	printf("ex09\n");
    char ex09_str[] = "salut, comment tu vas ?
	42mots quarante-deux; cinquante+et+un";
    printf("before str : %s\n", ex09_str);
	printf("after str : %s\n\n", ft_strcapitalize(ex09_str));
}
*/
