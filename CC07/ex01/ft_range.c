/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnottle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 08:22:20 by jnottle           #+#    #+#             */
/*   Updated: 2022/06/11 12:02:55 by jnottle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	size;
	int	i;

	if (min >= max)
	{
		ptr = NULL;
		return (ptr);
	}
	size = max - min;
	ptr = (int *)malloc(size * sizeof(int));
	if (!ptr)
	{
		ptr = NULL;
		return (ptr);
	}
	i = 0;
	while (i < size)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	size;
	int	i;
	int	*result;
	min = 4;
	max = 12;
	size = max - min;
	i = 0;
	result = ft_range(min, max);
	while (i < size)
	{
		printf("%d\n", result[i]);
		i++;
	}
}*/
