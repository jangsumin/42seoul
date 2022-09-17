/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:01:07 by sumijang          #+#    #+#             */
/*   Updated: 2022/05/01 19:44:15 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (is_charset(str[i + 1], charset) == 1
			&& is_charset(str[i], charset) == 0)
			words++;
		i++;
	}
	return (words);
}

void	ft_copy(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (is_charset(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	do_split(char **tab, char *str, char *charset)
{
	int	n;
	int	k;
	int	word;

	word = 0;
	n = 0;
	while (str[n])
	{
		if (is_charset(str[n], charset) == 1)
			n++;
		else
		{
			k = 0;
			while (is_charset(str[n + k], charset) == 0)
				k++;
			tab[word] = (char *) malloc((k + 1) * sizeof(char));
			if (tab == 0)
				return ;
			ft_copy(tab[word], str + n, charset);
			n += k;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		words;

	words = count_words(str, charset);
	tab = (char **) malloc((words + 1) * sizeof(char *));
	if (tab == 0)
		return (0);
	tab[words] = 0;
	do_split(tab, str, charset);
	return (tab);
}
