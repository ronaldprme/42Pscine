/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:53:12 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/11 08:56:51 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	strn[12];
	int		i;

	i = 0;
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		write(1, "0", 1);
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		while (nb != 0)
		{
			strn[i++] = nb % 10 + '0';
			nb /= 10;
		}
		while (i > 0)
			ft_putchar(strn[--i]);
	}
}
/*
int	main(void)
{
	ft_putnbr(2147483647);
	return (0);
}*/