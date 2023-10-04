/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:00:46 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/06 13:40:22 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
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
	char	s1[20] = "Ousar sonhar";
	char	s2[20] = "Ousar sonh";
	unsigned int	n;

	n = 14;	
	int res = ft_strncmp(s1, s2, n);
	printf("%d\n", res);
	printf("%d\n", strncmp(s1, s2, n));
 	return (0);
}*/