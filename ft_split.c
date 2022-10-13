/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qjungo <qjungo@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 20:52:33 by qjungo            #+#    #+#             */
/*   Updated: 2022/10/13 10:04:06 by qjungo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_char_to_str(char c)
{
	char	*res;

	res = malloc(2);
	res[0] = c;
	res[1] = 0;
	return (res);
}

// TODO : turn public for ft_printf
//  bonus !
static char	*ft_strjoin_free(char *s1, char s2)
{
	char			*res;
	char			*s2_c;

	s2_c = ft_char_to_str(s2);
	res = ft_strjoin(s1, s2_c);
	free(s1);
	free(s2_c);
	return (res);
}

// TODO : turn public for ft_printf
//  bonus !
static int	count_words(char const *s, char c)
{
	int		i;
	int		new_word;
	int		word_count;

	i = 0;
	new_word = 1;
	word_count = 0;
	while (s[i])
	{
		if (s[i] == c)
			new_word = 1;
		else if (new_word && s[i] != c)
		{
			new_word = 0;
			word_count++;
		}
		i++;
	}
	return (word_count);
}

typedef struct s_bordel {
	char	**res;
	int		i;
	int		new_word;
	int		word_count;
	int		n_word;
}	t_bordel;

static int	init_res(char const *s, char c, int *n_word, char ***res)
{
	*n_word = count_words(s, c);
	*res = ft_calloc((*n_word) + 1, sizeof(char *));
	if (*res == NULL)
		return (1);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	t_bordel	d;

	d.i = 0;
	d.new_word = 1;
	d.word_count = -1;
	if (init_res(s, c, &d.n_word, &d.res))
		return (NULL);
	while (s[d.i])
	{
		if (s[d.i] == c)
			d.new_word = 1;
		else if (d.new_word && s[d.i] != c)
		{
			d.new_word = 0;
			d.res[++d.word_count] = ft_strjoin_free(ft_strdup(""), s[d.i]);
		}
		else
			d.res[d.word_count] = ft_strjoin_free(d.res[d.word_count], s[d.i]);
		if (d.word_count > d.n_word && d.res[d.word_count] == NULL)
			return (NULL);
		d.i++;
	}
	return (d.res);
}
