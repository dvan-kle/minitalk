/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 15:09:55 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/02/15 16:40:29 by danielvankl   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
		i++;
	}
	return (1);
}