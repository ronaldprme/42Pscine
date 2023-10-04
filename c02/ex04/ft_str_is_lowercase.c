/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:22:25 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/05 11:03:53 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	*str;

	str = "aslkfjlasf423jlkdasiAjf";
	if (ft_str_is_lowercase(str))
		printf("only lowwecasa or space");
	else
		printf("other characters");
	return (0);
}*/