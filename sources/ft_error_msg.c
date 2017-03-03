/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_msg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbetz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 01:46:42 by bbetz             #+#    #+#             */
/*   Updated: 2017/02/27 01:48:25 by bbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_error_msg(char *str, int i)
{
	ft_putstr_fd(str, 2);
	ft_putchar_fd('\n', 2);
	return (i);
}