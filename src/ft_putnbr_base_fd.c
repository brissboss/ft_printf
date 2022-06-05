/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissia <tbrissia@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:48:14 by tbrissia          #+#    #+#             */
/*   Updated: 2022/03/17 17:57:57 by tbrissia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base_fd(int nbr, int fd, int *count)
{
	char			*base;
	unsigned int	n;

	n = nbr;
	base = "0123456789ABCDEF";
	if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-', fd);
		*count += 1;
	}
	if (n >= 16)
	{
		ft_putnbr_base_fd((n / 16), fd, count);
		n = n % 16;
		ft_putchar_fd(base[n], fd);
		*count += 1;
	}
	else
	{
		ft_putchar_fd(base[n], fd);
		*count += 1;
	}
}

void	ft_putnbr_base2_fd(int nbr, int fd, int *count)
{
	char			*base;
	unsigned int	n;

	n = nbr;
	base = "0123456789abcdef";
	if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-', fd);
		*count += 1;
	}
	if (n >= 16)
	{
		ft_putnbr_base2_fd((n / 16), fd, count);
		n = n % 16;
		ft_putchar_fd(base[n], fd);
		*count += 1;
	}
	else
	{
		ft_putchar_fd(base[n], fd);
		*count += 1;
	}
}
