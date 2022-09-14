/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:01:07 by sumijang          #+#    #+#             */
/*   Updated: 2022/05/01 19:40:59 by sumijang         ###   ########.fr       */
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

#include <stdio.h>

int main(void)
{
	printf("-------ex05-------\n\n");
    char **ex05_split1;
    char **ex05_split2;
    char **ex05_split3;
	char *ex05_str1 = "hello my name is hunpark!";
	char *ex05_str2 = "good@day!cat#dog!vim12!";
	char *ex05_str3 = "i1my2me3mine4you5your6you7yours";



	ex05_split1 = ft_split(ex05_str1, " ");
    ex05_split2 = ft_split(ex05_str2, "@!#");
    ex05_split3 = ft_split(ex05_str3, "1234567");
    printf("---test1---\n");
	for (int j = 0; j < 5; j++)
	{
		printf("%s\n", ex05_split1[j]);
	}
    printf("\n\n");
    printf("---test2---\n");
    for (int j = 0; j < 5; j++)
	{
		printf("%s\n", ex05_split2[j]);
	}
    printf("\n\n");
    printf("---test3---\n");
    for (int j = 0; j < 8; j++)
	{
		printf("%s\n", ex05_split3[j]);
	}
    printf("\n\n");
	free(ex05_split1);
    free(ex05_split3);
    free(ex05_split2);
}
