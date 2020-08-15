/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 11:00:24 by jperrier          #+#    #+#             */
/*   Updated: 2020/08/15 12:28:16 by jperrier         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		is_border(int x, int y, int limit_x, int limit_y)
{
	if (x == 0 || x == limit_x - 1 || y == 0 || y == limit_y - 1)
		return (1);
	return (0);
}

char	get_letter(int x, int y, int limit_x, int limit_y)
{
	if ((x == 0 && y == 0) || (x == 0 && y == limit_y - 1))
		return ('A');
	if ((x == limit_x - 1 && y == 0) || (x == limit_x - 1 && y == limit_y - 1))
		return ('C');
	return ('B');
}

void	rush(int limit_x, int limit_y)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < limit_y)
	{
		x = 0;
		while (x < limit_x)
		{
			if (is_border(x, y, limit_x, limit_y) == 1)
			{
				ft_putchar(get_letter(x, y, limit_x, limit_y));
			}
			else
			{
				ft_putchar(' ');
			}
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
