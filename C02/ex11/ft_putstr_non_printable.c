/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 23:26:27 by sumijang          #+#    #+#             */
/*   Updated: 2022/04/20 21:29:24 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

int	ft_char_printable(unsigned char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	a;

	i = 0;
	while (str[i] != '\0')
	{
		a = str[i];
		if (ft_char_printable(a) == 1)
			ft_putchar(a);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[a / 16]);
			ft_putchar("0123456789abcdef"[a % 16]);
		}
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	printf("ex11\n");
    char ex11_str[] = "Coucou\ntu vas bien ?";
    printf("str : %s\n", ex11_str);
	ft_putstr_non_printable(ex11_str);
    printf("\n");
}
*/
