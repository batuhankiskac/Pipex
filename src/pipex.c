/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankiskac <batuhankiskac@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:26:37 by bkiskac           #+#    #+#             */
/*   Updated: 2025/01/07 20:00:07 by batuhankisk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char *argv[])
{
	int	infile;
	int	outfile;
	int	pipe_fd[2];

	if (argc != 5)
	{
		ft_putstr_fd("Usage: /pipex file1 cmd1 cmd2 file2\n", 2);
		return (EXIT_FAILURE);
	}
	infile = open_file(argv[1], O_RDONLY, 0);
	outfile = open_file(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	

	return (0);
}
