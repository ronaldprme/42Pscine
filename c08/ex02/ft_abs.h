/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rprocopi <rprocopi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:35:49 by rprocopi          #+#    #+#             */
/*   Updated: 2023/08/16 16:54:53 by rprocopi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# include <stdio.h>

# define ABS(Value) Value + Value * -1 * (Value < 0) + Value * -1 * (Value < 0)

#endif