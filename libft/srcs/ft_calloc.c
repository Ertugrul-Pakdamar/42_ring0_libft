/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:41:28 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/20 10:14:49 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*arr;
	void	*res;
	size_t	index;

	res = (char *)malloc(nmemb * size);
	arr = (char *)res;
	if (arr == NULL)
		return (NULL);
	index = 0;
	while (index < nmemb * size)
	{
		arr[index] = 0;
		index++;
	}
	return (arr);
}
