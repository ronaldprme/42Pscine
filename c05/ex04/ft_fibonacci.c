/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:35:47 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/10 12:02:27 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	resultado;

	resultado = 0;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		resultado = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (resultado);
}
/*
int	main(void)
{
	int	index;
	int	i;

	i = 0;
	index = 40;
	while (i <= index)
	{
		printf("Fibronacci de %d é %d\n", i, ft_fibonacci(i));
		i++;
	}
	return (0);
}*/
