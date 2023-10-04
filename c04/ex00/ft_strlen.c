/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:53:12 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/05 19:53:08 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}
/*
int main(void)
{
	char	src[40] = "World";

    printf("%d\n", ft_strlen(src));
    if (ft_strlen(src) == strlen(src))
        printf("Validado!!");
    return (0);
}*/
