/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnottle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:24:23 by jnottle           #+#    #+#             */
/*   Updated: 2022/05/25 12:20:27 by jnottle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)

{
	int	a;
	int	i;

	i = 0;
	while (str[i])
	{
		a = str[i];
		write(1, &a, 1);
		i++;
	}
}
/*
int	main(void)

{
	char	str[] = "Hello";

	ft_putstr(str);	
}
*/
