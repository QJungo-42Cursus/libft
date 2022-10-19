/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjungo <qjungo@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:52:57 by qjungo            #+#    #+#             */
/*   Updated: 2022/10/19 11:40:40 by qjungo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *string, unsigned int start, size_t len)
{
	int		i;
	char	*res;
	int		first_len;

	if (string == NULL)
		return (NULL);
	first_len = ft_strlen(string);
	if ((unsigned int)first_len < start || len == 0)
	{
		res = ft_strdup("");
		if (res == NULL)
			return (NULL);
		return (res);
	}
	if ((unsigned int)first_len < start + (unsigned int)len)
		len = first_len - start;
	res = malloc(len + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < (int)len)
	{
		res[i] = string[start];
		i++;
		start++;
	}
	res[i] = 0;
	return (res);
}

