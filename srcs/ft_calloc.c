/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:41:28 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/31 11:38:22 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	res = (void *)malloc(nmemb * size);
	if (res == NULL)
		return (NULL);
	// FIXME:	(nmemb) yeterli mi yoksa böyle mi kalsın öğren
	ft_bzero(res, nmemb * size);
	return (res);
}
