/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnottle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:16:18 by jnottle           #+#    #+#             */
/*   Updated: 2022/06/11 13:47:17 by jnottle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	int		i;
	char	*duplicate;

	i = 0;
	while (src[i])
	{
		i++;
	}
	duplicate = (char *)malloc(i + 1 * sizeof(char));
	if (!duplicate)
	{
		duplicate = NULL;
		return (duplicate);
	}
	else
	{
		i = 0;
		while (src[i])
		{
			duplicate[i] = src[i];
			i++;
		}
		duplicate[i] = '\0';
		return (duplicate);
	}
}

int	main(void)
{
	char	str[] = "FourtyTwo";
	printf("%s\n", ft_strdup(str));
}
