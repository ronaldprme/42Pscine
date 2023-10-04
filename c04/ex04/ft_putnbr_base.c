/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:48:22 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/10 13:12:15 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pt_char(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	max(char *base)
{
	int	i;
	int max;

	i = 0;
	while (base[i])
	{	
		if (base[i] > base[i+1])	
			max = base[i]
			
		i++;
	}
	return (max);
}

void range(char	*base)
{
	int	i;
	i = 0;

	while ((base[i] <= '20' || (base[i] >= '48' && base[i]  <= '123'))
	{
		return (0)
		i++;
	}	
	return (1);
}
// funcao base
void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	char	*bas;
	
	i = 0;
	if (range(base))
	{
		while (base[i] >= '0' && base[i]  <= '9' && i-1 < nbr)
		{
			if (nbr <= max)
			{
				
			}

		32
		}
		

	{
		pt_char("--fora do range--");
	
}


int	main(int argc, char *argv[])
{
	pt_char("numero: ");
	pt_char(argv[1]);
	pt_char(", na base: ");
	pt_char(argv[2]);
	pt_char(" = ");
	return (0
}

