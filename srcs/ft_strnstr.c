/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:07:24 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/29 17:27:16 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_match(char *str, char *to_find, int match_index)
{
	int	index;

	index = 0;
	while (to_find[index])
	{
		if (str[match_index + index] != to_find[index])
			return (0);
		index++;
	}
	return (1);
}

char	*ft_strnstr(char *str, char *to_find, int len)
{
	int	index;
	int	size;

	if (str == NULL && len == 0)
		return (NULL);
	size = 0;
	while (to_find[size])
		size++;
	if (to_find[0] == '\0')
		return (str);
	index = 0;
	while (str[index] && index < len)
	{
		if (str[index] == to_find[0])
		{
			if (is_match(str, to_find, index) && index + size <= len)
				return (&str[index]);
		}
		index++;
	}
	return (0);
}
