/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fmath.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:01:46 by rchavez           #+#    #+#             */
/*   Updated: 2024/09/09 11:31:27 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

t_fixed f_mult(t_fixed a, t_fixed b)
{
	__int128_t	res;
	
	res = (__int128_t)a * b;
	return ((t_fixed)(res >> POINT));
}

t_fixed	f_div(t_fixed a, t_fixed b)
{
	__int128_t	temp;
	
	temp = (__int128_t)a;
	temp = temp << POINT;
	temp = temp / b;

	return ((t_fixed)temp);
}

t_fixed	f_pow(t_fixed a, int b)
{
	t_fixed	result;

	result = int_to_fixed(1);
	if (b > 0)
	{
		while (b)
		{
			result = f_mult(result, a);
			b--;
		}
	}
	else if (b < 0)
	{
		while (b)
		{
			result = f_div(result, a);
			b++;
		}
	}
	return (result);
}
