/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 13:42:16 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/18 14:42:20 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	count_strs(char const *s, char c)
{
	int	s_index;
	int	count;

	if (!s)
		return (0);
	s_index = 1;
	count = 0;
	while (s[s_index])
	{
		if (s[s_index] == c && s[s_index - 1] != c)
			count++;
		s_index++;
	}
	return (count + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		start_index;
	int		res_index;
	int		s_index;
	int		len;

	res = (char **)malloc((count_strs(s, c) + 1) * sizeof(char *));
	if (!s || !res)
		return (NULL);
	s_index = 0;
	res_index = 0;
	while (s[s_index])
	{
		while (s[s_index] == c)
			s_index++;
		start_index = s_index;
		while (s[s_index] && s[s_index] != c)
			s_index++;
		len = s_index - start_index;
		if (len > 0)
			res[res_index++] = ft_substr(s, start_index, len);
	}
	res[res_index] = NULL;
	return (res);
}
