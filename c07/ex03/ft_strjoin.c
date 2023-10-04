/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:07:13 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/17 13:43:14 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	id;
	int	is;

	id = 0;
	is = 0;
	while (dest[id])
		id++;
	while (src[is])
		dest[id++] = src[is++];
	dest[id] = '\0';
	return (dest);
}

char	*ft_malloc(char **array, int size_array)
{
	if (size_array == 1)
	{
		*array = (char *)malloc(1);
		(*array)[0] = '\0';
		return (*array);
	}
	else
	{
		*array = (char *)malloc(size_array);
		if (array == NULL)
			return (NULL);
		(*array)[0] = '\0';
	}
	return (*array);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total_len;
	char	*result;

	if (size == 0)
	{
		result = ft_malloc(&result, 1);
		return (result);
	}
	i = 0;
	total_len = 0;
	while (i < size)
		total_len += ft_strlen(strs[i++]);
	total_len += (size - 1) * ft_strlen(sep) + 1;
	result = ft_malloc(&result, total_len);
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}
/*
int	main(void)
{
	int		size;
	char	*strings[] = {"Ousar", "sonhar", "ousar", "vencer"};
	char	*separador = "->>>";

	size = sizeof (strings) / sizeof (strings[0]);
	printf("%s", ft_strjoin(size, strings, separador));
	free(ft_strjoin(size, strings, separador));
	return (0);
}*/
