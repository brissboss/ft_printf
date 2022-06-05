/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrissia <tbrissia@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 11:42:16 by tbrissia          #+#    #+#             */
/*   Updated: 2022/03/17 17:25:42 by tbrissia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "../Libft/libft.h"

int		ft_printf(const char *str, ...);
void	ft_percent(va_list ptr, const char *str, int i, int *count);
void	ft_ischar(va_list ptr, const char *str, int i, int *count);
void	ft_putuns_fd(unsigned int n, int fd, int *count);
void	ft_putnbr_base_fd(int nbr, int fd, int *count);
void	ft_putnbr_base2_fd(int nbr, int fd, int *count);
void	ft_bin_hex(unsigned long int add, int *count);
void	ft_putnbr_pr_fd(int n, int fd, int *count);
void	ft_putnbr_pr2_fd(int n, int fd, int *count);
#endif