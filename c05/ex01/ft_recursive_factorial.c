/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:35:06 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/13 09:40:50 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	fat;

	fat = 0;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		fat = ft_recursive_factorial(nb - 1);
		fat *= nb;
	}
	return (fat);
}
/*
int	main(void)
{
	int	num;
	int	fat;

	num = 5;
	fat = ft_recursive_factorial(num);
	printf("Fatorial de %d é %d\n", num, fat);
	return (0);
}*/
