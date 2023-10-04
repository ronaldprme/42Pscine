/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 13:53:02 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/16 16:40:25 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		len;
	int		i;

	len = 0;
	while (src[len])
		len++;
	copy = (char *)malloc((len + 1) * 8);
	i = 0;
	while (i <= len)
	{
		copy[i] = src[i];
		i++;
	}
	return (copy);
}
/*
int	main(void)
{
	char	*fonte;
	char	*saida;

	fonte = "e ai galera!?";
	saida = ft_strdup(fonte);
	printf("fonte: %s\nsaida: %s", fonte, saida);
	return (0);
}
*/