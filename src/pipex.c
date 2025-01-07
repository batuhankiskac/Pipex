/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankiskac <batuhankiskac@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:26:37 by bkiskac           #+#    #+#             */
/*   Updated: 2025/01/07 22:18:18 by batuhankisk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void child_process(int fd, int pipe_fd[2], char *cmd, char *envp[])
{

}

void parent_process(int fd, int pipe_fd[2], char *cmd, char *envp[])
{
	
}

int	main(int argc, char *argv[], char *envp[])
{
	int		infile;
	int		outfile;
	int		pipe_fd[2];
	pid_t	pid;

	if (argc != 5)
	{
		ft_putstr_fd("Usage: /pipex file1 cmd1 cmd2 file2\n", 2);
		return (EXIT_FAILURE);
	}
	infile = open_file(argv[1], O_RDONLY, 0);
	outfile = open_file(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (pipe(pipe_fd) == -1)
		show_error("Error creating pipe");
	pid = fork();
	if (pid == -1)
		show_error("Error creating child process");
	if (pid == 0)
		child_process(infile, pipe_fd, argv[2], envp);
	else
	{
		waitpid(pid, NULL, 0);
		parent_process(outfile, pipe_fd, argv[3], envp);
	}
	return (0);
}
