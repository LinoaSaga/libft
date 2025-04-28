/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljudd <ljudd@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:29:57 by ljudd             #+#    #+#             */
/*   Updated: 2025/04/28 10:06:54 by ljudd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* count the number of strings to do*/
static size_t	ft_nbstr(char const *s, char c)
{
	size_t	k;
	int		in_chaine;
	size_t	res;

	k = -1;
	res = 0;
	in_chaine = 0;
	while (s[++k])
	{
		if (!in_chaine && s[k] != c)
		{
			res++;
			in_chaine = 1;
		}
		else if (in_chaine && s[k] == c)
			in_chaine = 0;
	}
	return (res);
}

/* indicate the position of start and end of strings in initial string*/
static size_t	*ft_strpos(char const *s, char c, size_t nb_str, size_t *j)
{
	size_t	k;
	int		in_chaine;
	size_t	*res;

	res = (size_t *) malloc(2 * nb_str * sizeof(size_t));
	if (!res)
		return (NULL);
	k = -1;
	in_chaine = 0;
	while (s[++k])
	{
		if (!in_chaine && s[k] != c)
		{
			res[(*j)++] = k;
			in_chaine = 1;
		}
		else if (in_chaine && s[k] == c)
		{
			res[(*j)++] = k - 1;
			in_chaine = 0;
		}
	}
	if (in_chaine)
		res[*j] = k - 1;
	return (res);
}

/*correctly free the different memories allocation, given the number*/
/* of strings already written*/
static char	**ft_leave(size_t *str_pos, char **res, size_t n)
{
	size_t	k;

	if (str_pos)
		free(str_pos);
	if (res)
	{
		k = -1;
		while (++k < n)
			free(res[k]);
		free (res);
	}
	return (NULL);
}

/*core func*/
char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	nb_str;
	size_t	*str_pos;
	size_t	k;
	size_t	j;

	nb_str = ft_nbstr(s, c);
	j = 0;
	str_pos = ft_strpos(s, c, nb_str, &j);
	res = (char **) malloc((nb_str + 1) * sizeof(char *));
	if (!res || !str_pos)
		return (ft_leave(str_pos, res, 0));
	k = -1;
	while (++k < nb_str)
	{
		res[k] = ft_substr(s,
				str_pos[2 * k], str_pos[2 * k + 1] - str_pos[2 * k] + 1);
		if (!res[k])
			return (ft_leave(str_pos, res, k));
	}
	res[k] = NULL;
	free (str_pos);
	return (res);
}
