/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   server.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 14:07:58 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/02/08 17:15:11 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <signal.h>

void	handler(int signal)
{
	static int	bit;
	static int	i;

	if (signal == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		write(1, &i, 1);
		bit = 0;
		i = 0;
	}
}

int	main(int ac, char **av)
{
	int	pid;

	av[0] = av[0];
	if (ac != 1)
	{
		printf("%s\n", "Error");
		return (0);
	}
	pid = getpid();
	printf("PID = %i\n", pid);
	while (1)
	{
		signal (SIGUSR1, handler);
		signal (SIGUSR2, handler);
		pause();
	}
}
