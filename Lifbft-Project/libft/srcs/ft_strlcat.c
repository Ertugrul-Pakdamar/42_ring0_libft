/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 09:34:33 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/20 10:16:31 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_len_calc(unsigned int *result, int index1, int size)
{
	if (size <= index1)
		*result += size;
	else
		*result += index1;
}

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index1;
	unsigned int	index2;
	unsigned int	result;

	if (dest == NULL && size == 0)
		return (0);
	index1 = 0;
	index2 = 0;
	result = 0;
	while (dest[index1])
		index1++;
	while (src[result])
		result++;
	ft_len_calc(&result, index1, size);
	while (src[index2] && (index1 + 1) < size)
	{
		dest[index1] = src[index2];
		index1++;
		index2++;
	}
	if (index1 != 0)
		dest[index1] = '\0';
	return (result);
}
