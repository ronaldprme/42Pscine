/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:51:40 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/06 09:54:09 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	if_up(char str)
{
	if (str >= 65 && str <= 90)
	{
		return (1);
	}
	return (0);
}

int	if_down(char str)
{
	if (str >= 97 && str <= 122)
	{
		return (1);
	}
	return (0);
}

int	if_no_alpha(char str)
{
	if ((str >= 0 && str <= 47) || (str >= 91 && str <= 96) || 
		(str >= 123 && str <= 126))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (if_up(str[i]) || if_down(str[i]))
		{
			if (i == 0 && if_down(str[i]))
			{
				str[i] -= 32;
			}
			if (if_no_alpha(str[i - 1]) && if_down(str[i]))
			{
				str[i] -= 32;
			}
			if ((if_up(str[i - 1]) || if_down(str[i - 1])) && if_up(str[i]))
			{
				str[i] += 32;
			}
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	texto[80] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	
	printf("%s", texto);
	char	*result = ft_strcapitalize(texto);
	printf("\n%s", result);
	return (0);
}*/
