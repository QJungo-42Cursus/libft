/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjungo <qjungo@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:52:57 by qjungo            #+#    #+#             */
/*   Updated: 2022/10/11 10:46:31 by qjungo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;
	unsigned int	first_len;
	size_t			res_len;

	first_len = (unsigned int)ft_strlen(s);
	if (first_len < start || len == 0)
		return (ft_strdup(""));
	res_len = ft_strlen(&s[start]);
	if (res_len > len)
		res_len = len;
	res = malloc(sizeof(char) * (res_len + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < res_len)
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = 0;
	return (res);
}
