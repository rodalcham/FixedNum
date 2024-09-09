/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ffloat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:51:29 by rchavez           #+#    #+#             */
/*   Updated: 2024/09/09 12:10:59 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

t_fixed	float_to_fixed(float f)
{
	return ((t_fixed)(f * SCALE));
}

float	fixed_to_float(t_fixed f)
{
	return (((float)f / SCALE));
}
