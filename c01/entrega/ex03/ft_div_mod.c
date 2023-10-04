/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 13:41:58 by rprocopi          #+#    #+#             */
/*   Updated: 2023/07/31 13:55:41 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
	int     a;
	int     b;
	int     div;
	int     mod;

	a = 900;
	b = 30;
	div = 0;
	mod = 0;
	printf("a = %d, b = %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("div = %d\n", div);
	printf("mod = %d\n", mod);
	return (0);	
}*/	
