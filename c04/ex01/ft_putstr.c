/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:53:12 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/10 14:50:46 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}
/*
int main(void)
{
	char	src[40] = "World\n";
    
    ft_putstr(src);
    
    return (0);
}*/