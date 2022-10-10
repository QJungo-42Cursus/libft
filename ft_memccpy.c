/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjungo <qjungo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:14:55 by qjungo            #+#    #+#             */
/*   Updated: 2022/10/10 11:14:55 by qjungo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t count)
{
	size_t		i;
	char		*dest_ptr;
	char		*src_ptr;

	dest_ptr = (char *)dest;
	src_ptr = (char *)src;
	i = 0;
	while (i < count && src_ptr[i - 1] != c)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (&dest_ptr[i]);
}
