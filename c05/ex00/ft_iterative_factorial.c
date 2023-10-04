/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:34:50 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/13 09:39:30 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i > 0)
	{
		nb = i * nb;
		i--;
	}
	return (nb);
}
/*
int	main(void)
{
	int	num;
	int	fat;

	num = 3;
	fat = ft_iterative_factorial(num);
	printf("Fatorial de %d é %d\n", num, fat);
	return (0);
}*/
