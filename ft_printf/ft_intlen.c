/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 05:13:45 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/05/27 01:34:08 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

int	ft_intlen(int num)
{
	if (num < 0)
		return (ft_intlen(-num) + 1);
	if (num < 10)
		return (1);
	return (1 + ft_intlen(num / 10));
}
