/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fdouble.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:51:06 by rchavez           #+#    #+#             */
/*   Updated: 2024/09/09 11:02:14 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

t_fixed	double_to_fixed(double d)
{
	return ((t_fixed)(d * SCALE));
}

double	fixed_to_double(t_fixed d)
{
	return ((double) d / SCALE);
}
