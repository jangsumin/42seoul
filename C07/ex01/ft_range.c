/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumijang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:26:35 by sumijang          #+#    #+#             */
/*   Updated: 2022/04/28 20:45:22 by sumijang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	range;
	int	i;

	if (min >= max)
		return (0);
	range = max - min;
	p = (int *)malloc(range * sizeof(int));
	if (p == 0)
		return (0);
	else
	{
		i = -1;
		while (++i < range)
		{
			p[i] = min + i;
		}
		return (p);
	}
}
/*
#include <stdio.h>

int main(void)
{
	printf("-------ex01-------\n\n");
    int *ex01_arr1;
    int *ex01_arr2;
    int *ex01_arr3;

    printf("min : 1, max : 10\n");
    ex01_arr1 = ft_range(1, 10);
    for(int i = 0; i < 9; i++)
    {
        printf("%d ", ex01_arr1[i]);
    }
    printf("\n\n");
    printf("min : 10, max : 1\n");
    ex01_arr2 = ft_range(1, 0);
    printf("%p ", ex01_arr2);
    printf("\n\n");
    printf("min : -25, max : -10\n");
    ex01_arr3 = ft_range(-25, -10);
    for(int i = 0; i < 15; i++)
    {
        printf("%d ", ex01_arr3[i]);
    }
    printf("\n\n");
    free(ex01_arr1);
    free(ex01_arr2);
    free(ex01_arr3);
}
*/
