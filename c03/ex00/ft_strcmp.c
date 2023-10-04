/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:37:29 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/10 18:45:23 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if ((s1[i] - s2[i]) > 0)
			return (s1[i] - s2[i]);
		else if ((s1[i] - s2[i] < 0))
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[20] = "AAAA";
	char	s2[20] = "zzz";

	int res = ft_strcmp(s1, s2);
		printf("%d\n", res);
		printf("%d\n", strcmp(s1, s2));
 	return (0);
}*/
