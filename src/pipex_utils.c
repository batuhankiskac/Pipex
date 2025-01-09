/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankiskac <batuhankiskac@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:26:40 by bkiskac           #+#    #+#             */
/*   Updated: 2025/01/09 17:56:57 by batuhankisk      ###   ########.fr       */
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

void	ft_free(char **str)
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

void	ft_getenv(char *name, char *envp[])
{
	int		i;
	int		j;
	char	*sub;

	i = 0;
	while (envp[i])
	{
		j = 0;
		while(envp[i][j] && envp[i][j] != '=')
			j++;
		sub = ft_substr(envp[i], 0, j);
		if(ft_strcmp())
	}
}

void execute_cmd(char *cmd, char *envp[])
{

}
