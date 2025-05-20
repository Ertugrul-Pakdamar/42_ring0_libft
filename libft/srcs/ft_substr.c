/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 08:46:59 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/20 10:17:10 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	index;
	unsigned int	s_len;

	if (s == NULL)
		return (NULL);
	s_len = 0;
	while (s[s_len])
		s_len++;
	res = (char *)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	index = 0;
	while (index < len && s[start + index] && s_len > start)
	{
		res[index] = s[start + index];
		index++;
	}
	res[index] = '\0';
	return (res);
}
