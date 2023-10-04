/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 13:57:34 by rprocopi          #+#    #+#             */
/*   Updated: 2023/07/31 15:09:45 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int*b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
int	main(void)
{
	int		a;
	int		b;

	a = 100;
	b = 50;
	printf("--antes--\n");
	printf("a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("--depois--\n");
	printf("a = %d, b = %d\n", a, b);
	return (0);
}*/