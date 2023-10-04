/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:35:33 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/10 11:57:36 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	resultado;

	resultado = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		resultado = ft_recursive_power(nb, power - 1);
		resultado *= nb;
	}
	return (resultado);
}
/*
int	main(void)
{
	int	nb;
	int	power;

	nb = 3;
	power = 3;
	printf("%d elevado a %d é %d\n", nb, power, ft_recursive_power(nb, power));
	return (0);
}*/