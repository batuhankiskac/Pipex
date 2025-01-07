/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankiskac <batuhankiskac@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:26:32 by bkiskac           #+#    #+#             */
/*   Updated: 2025/01/07 22:18:41 by batuhankisk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>

int		open_file(const char *filename, int flags, int mode);
char	*find_path(char *cmd, char *envp[]);
void	execute_cmd(char *cmd, char *envp[]);
void	show_error(char *str);
void	child_process(int fd, int pipe_fd[2], char *cmd, char *envp[]);
void	parent_process(int fd, int pipe_fd[2], char *cmd, char *envp[]);


#endif
