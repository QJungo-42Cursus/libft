/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixel.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjungo <qjungo@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 13:06:46 by qjungo            #+#    #+#             */
/*   Updated: 2023/04/03 13:12:35 by qjungo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mlx.h"

unsigned int	color_from_rgb(char r, char g, char b)
{
	t_rgb		color;
	char		*ptr;

	ptr = (char *)&color;
	// TODO tests !
	ptr[0] = r;
	ptr[1] = g;
	ptr[2] = b;
	return (color);
}

void	color_to_rgb(char *r, char *g, char *b)
{
	t_rgb		color;
	char		*ptr;

	ptr = (char *)&color;
	*r = ptr[0];
	*g = ptr[1];
	*b = ptr[2];
}
