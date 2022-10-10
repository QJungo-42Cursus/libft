/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjungo <qjungo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:13:06 by qjungo            #+#    #+#             */
/*   Updated: 2022/10/10 11:13:18 by qjungo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include "libft.h"

void	ft_strrev(char *string)
{
	char	*temp;
	int		len;
	int		i;

	len = ft_strlen(string);
	temp = malloc(len + 1);
	i = 0;
	while (string[i])
	{
		temp[i] = string[len - i - 1];
		i++;
	}
	i = 0;
	while (i < len)
	{
		string[i] = temp[i];
		i++;
	}
	free(temp);
}
