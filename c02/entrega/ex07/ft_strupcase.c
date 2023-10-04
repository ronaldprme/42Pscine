/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:31:15 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/04 18:43:36 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] + 'A' - 'a';
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[50] = "KLDFJAF324ASDaadfs";

	printf("input : %s\n", str);
	printf("\n");
	printf("output: %s\n", ft_strupcase(str));
	printf("\n");
	return (0);
}*/