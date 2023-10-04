/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:51:40 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/05 13:40:44 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	test_maisculo(char str)
{
	if (str >= 65 && str <= 90)
	{
		return (1);
	}
	return (0);
}

int	test_minusculo(char str)
{
	if (str >= 97 && str <= 122)
	{
		return (1);
	}
	return (0);
}

int	test_letra_numero(char str)
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
		if (test_maisculo(str[i]) || test_minusculo(str[i]))
		{
			if (i == 0 && test_minusculo(str[i]))
			{
				str[i] -= 32;
			}
			if ((test_maisculo(str[i - 1]) 
					|| test_minusculo(str[i - 1])) && test_maisculo(str[i]))
			{
				str[i] += 32;
			}
		}
		i++;
	}
	return (str);
}

int	main()
{
	char	texto[80] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	
	printf("%s", texto);
	char	*result = ft_strcapitalize(texto);
	printf("\n%s", result);
	return (0);
}