/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnummi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 18:18:31 by mnummi            #+#    #+#             */
/*   Updated: 2022/05/21 18:25:11 by mnummi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

int	g_y_c;
int	g_x_c;

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	g_y_c = 1;
	while (g_y_c <= y)
	{
		g_x_c = 1;
		while (g_x_c <= x)
		{
			if ((g_x_c > 1 && g_x_c < x) && (g_y_c > 1 && g_y_c < y))
				ft_putchar(' ');
			else if ((g_x_c > 1 && g_x_c < x) && (g_y_c == 1 || g_y_c == y))
				ft_putchar('-');
			else if ((g_y_c > 1 && g_y_c < y) && (g_x_c == 1 || g_x_c == x))
				ft_putchar('|');
			else
				ft_putchar('o');
			g_x_c++;
		}
		ft_putchar('\n');
		g_y_c++;
	}
}
