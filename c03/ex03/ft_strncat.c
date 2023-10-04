/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:28:51 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/06 13:40:37 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	is;
	unsigned int	id;

	is = 0;
	id = 0;
	while (dest[id] != '\0')
	{
		id++;
	}
	while (src[is] != '\0' && is < nb)
	{
		dest[id] = src[is];
		is++;
		id++;
	}
	dest[id++] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[40] = "Hello ";
	char	src[40] = "World";

	printf("ft: %s\n", ft_strncat(dest, src, 4));
	return(0);
}*/