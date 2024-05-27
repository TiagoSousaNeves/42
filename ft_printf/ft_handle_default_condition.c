/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_default_condition.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 19:06:36 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/05/27 01:34:08 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

void	ft_handle_default_condition(char ********to_print, char *str)
{
	char	*temp;

	temp = ft_strjoin(str, *******to_print);
	free(str);
	free(*******to_print);
	*******to_print = ft_strdup(temp);
	free(temp);
	return ;
}
