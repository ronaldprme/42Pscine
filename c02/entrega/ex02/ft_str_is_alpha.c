/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:31:39 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/02 13:53:01 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>1

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || 
			(str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	*src;

	src = "Ousar ";
	if (ft_str_is_alpha(src))
		printf("O string tem apenas caracteres alfabeticos");
	else
		printf("o string tem caracteres nao alfabeticos");
	return (0);
}*/