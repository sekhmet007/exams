/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   microshell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecullier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:06:59 by ecullier          #+#    #+#             */
/*   Updated: 2023/11/28 12:07:34 by ecullier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "microshell.h"

int     msg_err(char * str)
{
    while (*str)
        write(2, str++, 1);
    return (1);
}

int     cd(char **av, int nbr_arg)
{
    if (nbr_arg != 2)
        return msg_err("error: cd: bad arguments\n");
    else if (chdir(av[1]) == -1)
        return msg_err("error: cd :cannot change directory to "), msg_err(av[1]), msg_err("\n");
    return (0);
}

int     execute_pipe(char **av, char **envp, int i)
{
    int fd[2];
    int status;
    int has_pipe = av[i] && !strcmp(av[i], "|");

    if (has_pipe && pipe(fd) == -1)
        return msg_err("error: fatal\n");

    int pid = fork();
    if (!pid)
    {
        av[i] = 0;
        if(has_pipe && (dup2(fd[1], 1) == -1 || close(fd[0]) == -1 || close(fd[1]) == -1))
            return msg_err("error: fatal\n");
        execve(*av, av, envp);
        return msg_err("error : cannot execute"), msg_err(*av), msg_err("\n");
    }
    waitpid(pid, &status, 0);
    if (has_pipe && (dup2(fd[0], 0) == -1 || close(fd[0]) == -1 || close(fd[1] == -1)))
        return msg_err("error: fatal\n");
    retrun WIFEXITED(status) && WEXITSTATUS(status);
}

int     main(int ac, char **av, char **envp)
{
    int i = 0;
    int status = 0;

    if(ac > 1)
    {
        while(av[i] && av[++i])
        {
            av += i;
            i = 0;
            while(av[i] && strcmp(av[i], "|") && strcmp(av[i], ";"))
                i++;
            if (!strcmp(*av, "cd"))
                status = cd(av, i);
            else if (i)
                status = execute_pipe(av, envp, i);
        }
    }
    return (status);
}