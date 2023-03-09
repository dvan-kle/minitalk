/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_utils.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: danielvankleef <danielvankleef@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 14:35:30 by dvan-kle      #+#    #+#                 */
/*   Updated: 2023/03/09 12:44:46 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	if (!str)
		return (ft_putstr("(null)"));
	return (write(1, str, ft_strlen(str)));
}

static unsigned int	ft_len(ssize_t nb)
{
	unsigned int	len;

	len = 0;
	if (nb < 0)
		len++;
	if (nb == 0)
		len++;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static int	ft_itoa_printf(ssize_t nb, int size)
{
	char	*ptr;
	int		len;

	ptr = malloc(size + 1);
	len = size;
	ptr[len--] = '\0';
	if (nb == 0)
		ptr[0] = '0';
	else
	{
		if (nb < 0)
		{
			ptr[0] = '-';
			nb = -nb;
		}
		while (nb != 0)
		{
			ptr[len] = (nb % 10) + '0';
			nb = nb / 10;
			len--;
		}
	}
	return (ft_putstr(ptr), free(ptr), size);
}

int	ft_convert(ssize_t nb)
{
	int		len;

	len = ft_len(nb);
	return (ft_itoa_printf(nb, len));
}
