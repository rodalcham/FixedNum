/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchavez <rchavez@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:23:41 by rchavez           #+#    #+#             */
/*   Updated: 2024/09/09 11:26:54 by rchavez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <stdint.h>

# define POINT 16
# define SCALE 65536

typedef int64_t	t_fixed;

t_fixed	f_pow(t_fixed a, int b);
t_fixed	f_mult(t_fixed a, t_fixed b);
t_fixed	f_div(t_fixed a, t_fixed b);
t_fixed	int_to_fixed(int n);
t_fixed	float_to_fixed(float f);
t_fixed	double_to_fixed(double d);
int		fixed_to_int(t_fixed n);
float	fixed_to_float(t_fixed f);
double	fixed_to_double(t_fixed d);

#endif