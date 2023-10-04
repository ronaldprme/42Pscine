/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 10:26:08 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/03 11:32:06 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	
	while (src


	return (dest);
}


int	main(void)
{
	char	*src = " ousar sonha, ousar realizar.";
	char	dest[100];
	int	i_src;
	int	i_dest;
	
	s_src = 0;
	s_dest = 0;

	while (src[s_src])
		s_src++;
	
	while (dest[s_dest])
		s_dest++;

	if (s_src > s_dest)
		printf("testo da fonte muito longo: \n");
	else
		printf("testo do destino%s: ", ft_strlcpy(dest, src, s_src);




	return (0);
}
