/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:22:51 by sumijang          #+#    #+#             */
/*   Updated: 2022/04/20 21:18:36 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		write(1, &c, 1);
		i++;
	}
}

void	ft_change_to_hex(unsigned long addr, int a)
{
	char	*list;

	list = "0123456789abcdef";
	if (addr < 16 && a == 1)
		ft_putchar('0', 1);
	if (addr >= 16)
	{
		ft_change_to_hex(addr / 16, 0);
		ft_change_to_hex(addr % 16, 0);
	}
	else
	{
		ft_putchar(list[addr], 1);
	}
}

void	ft_print_addr(unsigned long addr)
{
	unsigned long	tmp;
	int				i;

	i = 1;
	tmp = addr;
	while (i++ < 15)
	{
		if (tmp < 16)
			ft_putchar('0', 1);
		tmp /= 16;
	}
	ft_change_to_hex(addr, 0);
}

void	ft_print_str(unsigned char *add, int psize)
{
	int	i;

	i = -1;
	while (i++ < 16)
	{
		if (i % 2 == 0)
			ft_putchar(' ', 1);
		if (i < psize)
			ft_change_to_hex((unsigned long) *(add + i), 1);
		else if (i != 16)
			ft_putchar(' ', 2);
	}
	i = -1;
	while (i++ < psize - 1)
	{
		if (*(add + i) <= 31 || *(add + i) >= 127)
			ft_putchar('.', 1);
		else
			ft_putchar(*(add + i), 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*add;
	unsigned int	i;
	unsigned int	psize;

	i = 0;
	add = addr;
	while (i * 16 < size)
	{
		if (i < size / 16)
			psize = 16;
		else
			psize = size % 16;
		ft_print_addr((unsigned long)add + (i * 16));
		ft_putchar(':', 1);
		ft_print_str(add + (i * 16), psize);
		ft_putchar('\n', 1);
		i++;
	}
	return (addr);
}
/*
#include <stdio.h>
int	main()
{
	char	str[92] = "Bonjour les aminches   
	c  est fou tout ce qu on peut faire avec   print_memory    lol lol";
	str[20] = 0x09;
 	str[21] = 0x0a;
 	str[22] = 0x09;
 	str[33] = 0x09;
 	str[38] = 0x09;
 	str[63] = 0x09;
 	str[64] = 0x0a;
 	str[65] = 0x09;
 	str[78] = 0x0a;
 	str[79] = 0x0a;
 	str[80] = 0x0a;
 	str[81] = 0x09;
	str[85] = 0x2e;
	str[89] = 0x0a;
	str[90] = 0x20;
	ft_print_memory(str, 92);
}
*/
