/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnottle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:38:28 by jnottle           #+#    #+#             */
/*   Updated: 2022/06/01 13:27:24 by jnottle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_fibonacci(int nb)
{
	if (nb < 0)
		return (-1);
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	else
		return (ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2));
}
/*
int	main(void)
{
	printf("%d", ft_fibonacci(6));
	return (0);
}
*/
