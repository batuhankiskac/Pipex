/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankiskac <batuhankiskac@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:26:40 by bkiskac           #+#    #+#             */
/*   Updated: 2025/01/07 19:58:18 by batuhankisk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	show_error(char *str)
{
	perror(str);
	exit(EXIT_FAILURE);
}

int	open_file(const char *filename, int flags, int mode)
{
	int	fd;

	fd = open(filename, flags, mode);
	if (fd < 0)
		show_error("Error opening file");
	return (fd);
}
