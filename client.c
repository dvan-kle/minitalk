/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   client.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 14:23:12 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/03/25 16:09:28 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

void	ft_send_bits(int pid, char i)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((i & (1 << bit)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(400);
		bit++;
	}
}

int	main(int ac, char **av)
{
	int	pid;
	int	i;

	i = 0;
	if (ac != 3)
	{
		ft_printf("%s\n", "Error");
		return (0);
	}
	pid = ft_atoi(av[1]);
	while (av[2][i] != '\0')
	{
		ft_send_bits(pid, av[2][i]);
		i++;
	}
	ft_send_bits(pid, '\n');
	return (0);
}
