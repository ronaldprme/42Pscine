/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:29:09 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/05 18:05:08 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	is;
	int	id;

	is = 0;
	id = 0;
	while (dest[id] != '\0')
	{
		id++;
	}
	while (src[is] != '\0')
	{
		dest[id] = src[is];
		is++;
		id++;
	}
	dest[id] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[40] = "Hello ";
	char	src[20] = "World";

	printf("ft :%s", ft_strcat(dest, src));
	return (0);
}*/