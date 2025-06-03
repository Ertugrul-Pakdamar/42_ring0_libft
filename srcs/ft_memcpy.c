/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 10:01:21 by epakdama          #+#    #+#             */
/*   Updated: 2025/06/03 10:32:00 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(const void *dest, const void *src, size_t n)
{
	size_t			index;
	unsigned char	*res;
	unsigned char	*source;

	if (!dest && !src)
		return (NULL);
	res = (unsigned char *)dest;
	source = (unsigned char *)src;
	index = 0;
	while (index < n)
	{
		res[index] = source[index];
		index++;
	}
	return ((void *)dest);
}
