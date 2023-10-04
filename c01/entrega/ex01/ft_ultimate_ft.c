/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 13:47:17 by rprocopi          #+#    #+#             */
/*   Updated: 2023/07/31 12:44:10 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
/*
int     main(void)
{
        int     valor;
        int     *pt1;
        int     **pt2;
        int     ***pt3;
        int     ****pt4;
        int     *****pt5;
        int     ******pt6;
        int     *******pt7;
        int     ********pt8;
        int     *********pt9;

        valor = 99999;
        pt1 = &valor;
        pt2 = &pt1;
        pt3 = &pt2;
        pt4 = &pt3;
        pt5 = &pt4;
        pt6 = &pt5;
        pt7 = &pt6;
        pt8 = &pt7;
        pt9 = &pt8;
        
        printf("Valor inicial da variavel = %d\n", valor);
        ft_ultimate_ft(pt9);
        printf("Valor atribuido por ponteiro: = %d\n", valor);

        return (0);
}
*/