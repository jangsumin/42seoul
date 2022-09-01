/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <sumijang@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 20:11:19 by sumijang          #+#    #+#             */
/*   Updated: 2022/04/17 14:42:36 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alp;

	alp = 'z';
	while (alp >= 'a')
	{
		write(1, &alp, 1);
		alp--;
	}
}
