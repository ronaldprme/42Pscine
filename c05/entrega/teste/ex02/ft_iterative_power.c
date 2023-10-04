/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:35:21 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/10 11:53:14 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	potencia;

	potencia = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			potencia *= nb;
			power--;
		}
	}
	return (potencia);
}
/*
int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 4;
	printf(" %d elevado a %d é %d\n ", nb, power, ft_iterative_power(nb, power));
}*/