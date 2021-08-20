#include "minishell.h"

int     get_argc(char *cmds)
{
	int i;

	i = 0;
	while (cmds[i])
	{
		i++;
	}
	return (i);
}

void	redir_1(t_data *data, char **cmd_args, int cmd_argc)
{
	int fd;

	fd = open(cmd_args[cmd_argc - 1], O_RDWR, 0644);
	if (fd < 0)
	{
		//no such file or directory
	}
	dup2(fd, STDIN_FILENO);
	close(fd);

}

void	redir_2(t_data *data, char **cmd_args, int cmd_argc)
{
	int fd;

	fd = open(cmd_args[cmd_argc - 1], O_RDWR | O_CREAT | O_TRUNC, 0644);
	if (fd < 0)
	{
		//no such file or directory
	}
	dup2(fd, STDOUT_FILENO);
	close(fd);
}

void	reidr_3(t_data *data, char **cmd_args, int cmd_argc)
{
	int fd;

	fd = open(cmd_args[cmd_argc - 1], O_RDWR | O_CREAT | O_APPEND, 0644);
	if (fd < 0)
	{
		//no such file or directory
	}
	dup2(fd, STDOUT_FILENO);
	close(fd);
}

int     f_redir(t_data *data, int idx)
{
	if (cmds_argc == 1)
		return (0);
	cmd_args = ft_split(data->cmds[idx], ' ');

	if (cmd_args[cmds_argc - 2] == '<')
		redir_1(data, cmd_args, cmds_argc);
	else if (cmd_args[cmds_argc - 2] == '>')
		redir_2(data, cmd_args, cmds_argc);
	else if (cmd_args[cmds_argc - 2][0] == '>' && cmd_args[cmds_argc - 2][1] == '>')
		redir_3(data, cmd_args, cmds_argc);
	split_free(cmds_argc);
	return (1);
}

void	parsing_cmd(char *cmd_args, int idx)
{
	int	i;

	i = 0;
	if (idx == 0)
	{
		while (cmd_args[idx + i])
		{
			
		}
	}
}
void    check_redir(t_data *data, int idx)
{
	int		i;
	int		j;
	int cmds_argc;
	char **cmd_args;
	char *temp;
	int		flag;

	temp = NULL;
	cmds_argc = get_argc(cmd_args);
	i = 1;
	cmd_args = ft_split(data->cmds[idx], ' ');
    while (cmd_args[i])
    {
		j = 0;
		while (cmd_args[i][j])
		{
			if (ft_strchr("<>", data->cmds[i][j]))
			{
			}
			j++;
		}
		if (flag == 0)
		{
			if (temp == NULL)
				ft_strlcpy(temp, data->cmds[i], ft_strlen(data->cmds[i]));
			else
				
		}

		cmd_args[i]
    }
}