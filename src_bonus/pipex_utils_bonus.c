/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiskac <bkiskac@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 20:49:40 by bkiskac           #+#    #+#             */
/*   Updated: 2025/01/09 21:04:38 by bkiskac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

void	show_error(char *str)
{
	perror(str);
	exit(EXIT_FAILURE);
}

int	open_file(const char *filename, int flags, int mode)
{
	int fd;

	fd = open(filename, flags, mode);
	if (fd < 0)
		show_error("Error opening file");
	return (fd);
}

void	ft_free_all(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}
