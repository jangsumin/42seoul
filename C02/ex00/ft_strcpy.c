/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 10:53:55 by sumijang          #+#    #+#             */
/*   Updated: 2022/04/20 17:17:32 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("ex00\n");
    char ex00_src[] = "hello world!";
	char ex00_dest[20];
    printf("src : %s\n", ex00_src);
	ft_strcpy(ex00_dest, ex00_src);
	printf("ft_strcpy : %s\n", ex00_dest);
}
*/
