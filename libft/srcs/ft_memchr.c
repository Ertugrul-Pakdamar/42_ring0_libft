/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:25:23 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/20 10:15:23 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	char			*src;
	unsigned int	index;

	src = s;
	index = 0;
	while (index < n)
	{
		if (src[index] == (char)c)
			return (&src[index]);
		index++;
	}
	return (NULL);
}
