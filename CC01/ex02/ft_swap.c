/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnottle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 08:20:45 by jnottle           #+#    #+#             */
/*   Updated: 2022/05/25 12:21:22 by jnottle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{	
	int	_copy;

	_copy = *a;
	*a = *b;
	*b = _copy;
}
/*
int	main(void)
{
	int a;
	int b;
	a = 1;
	b = 2;
	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}
*/
