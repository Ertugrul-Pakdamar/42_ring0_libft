/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 09:45:24 by epakdama          #+#    #+#             */
/*   Updated: 2025/05/20 09:49:09 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	s[6];
	char	*res;

	fd = open("test.txt", O_RDWR | O_CREAT, 0777);
	if (fd == -1)
	{
		printf("File Create Failed\n");
		return (1);
	}
	strcpy(s, "hello");
	ft_putstr_fd(s, fd);
	lseek(fd, 0, SEEK_SET);
	res = malloc(6);
	read(fd, res, 6);
	close(fd);
	remove("test.txt");
	if (strcmp(res, s) == 0)
		printf("Test Passed: %s\n", res);
	else
	{
		printf("Test Failed: %s\n", res);
		return (1);
	}
	return (0);
}
