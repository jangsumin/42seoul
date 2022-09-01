/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <sumijang@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:57:07 by sumijang          #+#    #+#             */
/*   Updated: 2022/04/13 20:06:40 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alp;	

	alp = 'a';
	while (alp <= 'z')
	{
		write(1, &alp, 1);
		alp++;
	}
}
