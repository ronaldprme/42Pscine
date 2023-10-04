/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 13:26:01 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/16 16:37:13 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min < max)
	{
		array = (int *)malloc((max - min) * 4);
		if (array == NULL)
			return (0);
		while (i < max - min)
		{
			array[i] = min + i;
			i++;
		}
	}
	else 
		return (0);
	return (array);
}
/*
//int	main(int argc, char *argv[])
int	main(void)
{
	int	*range;
	int	i;
	int	min;
	int	max;

//	min = atoi(argv[1]);
//	max = atoi(argv[2]);
	min = 10;
	max = 20;
	printf("%d, %d\n", min, max);
	range = ft_range(min, max);
	i = 0;
	while (range[i])
		printf("%i\n", range[i++]);
	return (0);
}
*/