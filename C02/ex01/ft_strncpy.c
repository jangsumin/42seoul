/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 11:25:12 by sumijang          #+#    #+#             */
/*   Updated: 2022/04/20 17:32:35 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("ex01\n");
    char ex01_src[] = "Hello world!";
	char ex01_dest[20];
	printf("src : %s\nn = 5\n", ex01_src);
	ft_strncpy(ex01_dest, ex01_src, 5);
	printf("ft_strncpy : %s\n", ex01_dest);
}
*/
