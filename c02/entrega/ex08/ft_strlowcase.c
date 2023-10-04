/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:31:15 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/02 18:49:19 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] - 'A' + 'a';
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[50] = "KLDFJAFASDaadfs";

	printf("input : %s\n", str);
	printf("\n");
	printf("output: %s\n", ft_strlowcase(str));
	printf("\n");
	return (0);
}*/
