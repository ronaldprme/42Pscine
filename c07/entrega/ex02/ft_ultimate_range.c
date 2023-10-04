/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 17:27:45 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/17 16:39:18 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	*range = malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	else if (min >= max)
		return (*range == NULL);
	else if (min < max)
	{
		while (i < max - min)
		{
			(*range)[i] = min + i;
			i++;
		}
	}
	return (i);
}
/*
int	main(void)
{
	int	*array;
	int	i;
	int	min;
	int	max;
	int	count;

	min = 10;
	max = 20;
	printf("%d, %d\n", min, max);
	count = ft_ultimate_range(&array, min, max);
	i = 0;
	while (i < count)
		printf("%i\n", array[i++]);
	free(array);
	return (0);
}*/
