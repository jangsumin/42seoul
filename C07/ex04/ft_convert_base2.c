/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:19:30 by sumijang          #+#    #+#             */
/*   Updated: 2022/04/28 16:22:19 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	errcheck(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	i_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	whitespace(char *str, int *ptr)
{
	int	count;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	count = 1;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*ptr = i;
	return (count);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb1;
	int	nb2;
	int	start;
	int	sign;

	nb1 = 0;
	i = 0;
	start = errcheck(base);
	if (start >= 2)
	{
		sign = whitespace(str, &i);
		nb2 = i_base(str[i], base);
		while (nb2 != -1)
		{
			nb1 = (nb1 * start) + nb2;
			i++;
			nb2 = i_base(str[i], base);
		}
		return (nb1 *= sign);
	}
	return (0);
}
