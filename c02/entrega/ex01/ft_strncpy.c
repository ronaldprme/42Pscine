/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:47:06 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/06 09:44:53 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	unsigned int	size;
	char	*src;
	char	dest[30];

	src = "ousar lutar ousar vencer";
	size = 5;
	ft_strncpy(dest, src, size);
	printf("src : %s\n", src);
	printf("dest: %s\n", dest);
	if (ft_strncpy(dest, src, size) == strncpy(dest, src, size))
		printf("Validdo");
	return (0);
}*/