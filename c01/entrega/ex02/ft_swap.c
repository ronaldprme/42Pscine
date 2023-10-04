/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 12:01:11 by rprocopi          #+#    #+#             */
/*   Updated: 2023/07/31 12:57:05 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 20;
	printf("Valor antes da troca: x=%d e y=%d \n", x, y);
	ft_swap(&x, &y);
	printf("Valor depois da troca: x=%d e y=%d\n", x, y);
	return (0);
}*/
