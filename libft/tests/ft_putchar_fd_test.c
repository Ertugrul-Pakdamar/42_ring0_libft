/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 09:29:45 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/20 09:42:00 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	c;
	char	*res;

	fd = open("test.txt", O_RDWR | O_CREAT, 0777);
	if (fd == -1)
	{
		printf("File Create Failed\n");
		return (1);
	}
	c = 'a';
	ft_putchar_fd(c, fd);
	lseek(fd, 0, SEEK_SET);
	res = malloc(2);
	read(fd, res, 2);
	close(fd);
	remove("test.txt");
	if (res[0] == c)
		printf("Test Passed: %s\n", res);
	else
	{
		printf("Test Failed: %s\n", res);
		return (1);
	}
	return (0);
}
