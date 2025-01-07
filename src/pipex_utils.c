/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankiskac <batuhankiskac@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:26:40 by bkiskac           #+#    #+#             */
/*   Updated: 2025/01/07 20:20:10 by batuhankisk      ###   ########.fr       */
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

void child_process(int fd, int pipe_fd[2], char *cmd, char *envp[])
{

}

void parent_process(int fd, int pipe_fd[2], char *cmd, char *envp[])
{

}
