/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjungo <qjungo@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:35:34 by qjungo            #+#    #+#             */
/*   Updated: 2023/04/04 22:16:46 by qjungo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.h"
#include <math.h>

t_vec2	vec3_to2(t_vec3 v)
{
	t_vec2	n;

	n.x = v.x;
	n.y = v.y;
	return (n);
}

t_vec3	vec2_to3(t_vec2 v)
{
	t_vec3	n;

	n.x = v.x;
	n.y = v.y;
	n.z = 0;
	return (n);
}

t_vec2	angle_to_vec2(double angle)
{
	t_vec2	n;

	n.x = cos(angle);
	n.y = sin(angle);
	return (n);
}
