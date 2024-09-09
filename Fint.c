/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fint.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:23:44 by rchavez           #+#    #+#             */
/*   Updated: 2024/09/09 12:11:30 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

t_fixed	int_to_fixed(int n)
{
	return ((t_fixed)n << POINT);
}

int	fixed_to_int(t_fixed n)
{
	return ((int)(n >> POINT));
}
