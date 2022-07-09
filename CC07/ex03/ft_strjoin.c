/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: jnottle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:42:42 by jnottle           #+#    #+#             */
/*   Updated: 2022/06/11 13:47:41 by jnottle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int		ft_size_of_memory(int size, char **strs, char *sep);

void	ft_putstrjoin(char *strjoin, int size, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strjoin;
	int		size_of_memory;

	if (size == 0)
	{
		strjoin = (char *)malloc(sizeof(char));
		return (strjoin);
	}
	size_of_memory = ft_size_of_memory(size, strs, sep);
	strjoin = (char *)malloc(size_of_memory * sizeof(char));
	if (!strjoin)
		return (NULL);
	ft_putstrjoin(strjoin, size, strs, sep);
	return (strjoin);
}

void	ft_putstrjoin(char *strjoin, int size, char **strs, char *sep)
{
	int	a;
	int	i;
	int	j;
	int	k;

	a = 0;
	i = -1;
	while (++i < size)
	{
		j = -1;
		while (strs[i][++j])
		{
			strjoin[a++] = strs[i][j];
			if (strs[i][j + 1] == '\0' && i < size - 1)
			{
				k = -1;
				while (sep[++k])
				{
					strjoin[a++] = sep[k];
				}
			}
		}
	}
	strjoin[a] = '\0';
}

int	ft_size_of_memory(int size, char **strs, char *sep)
{
	int	strs_size;
	int	i;
	int	j;
	int	sep_size;
	int	size_of_memory;

	strs_size = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			strs_size++;
		}
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	sep_size = i * (size - 1);
	size_of_memory = strs_size + sep_size;
	return (size_of_memory);
}
/*
int	main(void)
{
	int		size;
	char	**strs;
	char	*sep;
	char	*result;

	strs = (char **)malloc(4 * sizeof(strs));
	strs[0] = "Dolphin";
	strs[1] = "Shark";
	strs[2] = "Penguin";
	strs[3] = "Seal";
	sep = "!!!";
	size = 4;
	result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);
}
*/
