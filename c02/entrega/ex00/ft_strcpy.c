/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:04:25 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/05 10:36:33 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*origem;
	char	destino[50];

	origem = "ousar lutar, ousar vencer";
	printf("--de--\n");
	printf("origen: %s\n", origem);
	ft_strcpy(destino, origem);
	printf("\n--para--\n");
	printf("destino: %s", destino);
	return (0);
}*/