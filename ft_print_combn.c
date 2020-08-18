/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srazack- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 08:50:52 by srazack-          #+#    #+#             */
/*   Updated: 2020/08/18 17:19:39 by srazack-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	p()
{
	write(1, ", ", 2);
}

int	verify(int n2, int x1, int x2)
{
	if(x1 == 10-n2 && x2 == 9)
		return 1;

	return 0;
		
}

void	puttab(int max,int *tab)
{
	int xy;

	xy = 0;
	while (xy < max)
	{
		ft_putchar(tab[xy] + '0');
		xy++;
	}

}

void ft_print_combn( int n)
{
	int locket[n];
	int i;
	int k;
	
	i = n - 1;
	locket[i] = n - 1;
	while(i != 0)
	{ i--;
		locket[i] = locket[i+1] - 1;
	}
	puttab(n, locket);
	p();
	i = 0;
	while (n < 10)
	{
		k = n - 1;
		if (verify(n, locket[0], locket[n - 1]) == 1)
		{
			break;
		}
		locket[k] = locket[k - 1] + 1;
		while ( locket[k] < 9)
		{
			locket[k] = locket[k] + 1;
			puttab(n, locket);
			p();
		}
		i = 0;
		while ()
		{   write(1, "test", 4);
			locket[k-1]++;
			k = k - 1;
			puttab(n, locket);
			p();
			i++;
		:
	}
	puttab(n, locket); 
}

int main ()
{	
	ft_print_combn(3);

/*	ft_print_combn(1);

	ft_print_combn(1);

	ft_print_combn(1);

	ft_print_combn(1);

	ft_print_combn(1);

	ft_print_combn(1);

	ft_print_combn(1);*/

	return 0;
}

