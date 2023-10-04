/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:36:06 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/13 09:57:22 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	radical;
	long	radicando;

	radicando = nb;
	radical = 2;
	if (radicando <= 0)
		return (0);
	else if (radicando == 1)
		return (1);
	if (radicando >= 2)
	{
		while (radical * radical <= radicando)
		{
			if (radical * radical == radicando)
				return (radical);
			radical++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	int	i; 

	i = 25;
	printf("%d", ft_sqrt(i));
}*/
