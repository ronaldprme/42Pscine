/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 19:51:31 by rprocopi          #+#    #+#             */
/*   Updated: 2023/07/31 21:45:45 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			if (i > 0)
				i--;
		}
		else
			i++;
	}
}

/*void	print(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < (size))
	{
		printf("tab: %d\n", tab[i]);
		i++;
	}
	printf("\n");
}

int	main(void)
{
	int	tab[5];	
	int len;

	len = 5;
	tab[0] = 4;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 0;
	tab[4] = 1;
	printf("--antes--\n");
	print(tab, len);
	ft_sort_int_tab(tab, len);
	printf("--depois--\n");
	print(tab, len);
	return (0);
}*/
