/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_specifier.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:17:45 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/05/27 02:17:22 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	ft_handle_specifier(char *boss, char *end, char **str_width,
				size_t width)
{
	char	*temp;

	temp = ft_strndup(boss, (size_t)(end - boss));
	if (!(ft_strrchr_printf(temp, '.')) && *end != 's' && *end != 'c')
		ft_bzero_printf(*str_width, width + 1);
	else
		ft_bspace_printf(*str_width, width + 1);
	free(temp);
	return ;
}
