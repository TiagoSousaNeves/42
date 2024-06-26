/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 01:30:58 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/05/28 02:10:05 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	char			*ptr;

	i = 0;
	ptr = NULL;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			ptr = (char *)&str[i];
		i++;
	}
	if ((unsigned char)c == '\0')
		ptr = (char *)&str[i];
	return (ptr);
}
