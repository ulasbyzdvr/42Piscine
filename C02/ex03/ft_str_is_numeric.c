/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubeyazda <ubeyazda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:06:50 by ubeyazda          #+#    #+#             */
/*   Updated: 2023/09/06 18:16:01 by ubeyazda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int		i;
	int		condition;

	condition = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
		{
		}
		else if ((str[i] >= '0') && (str[i] <= '9'))
		{
		}
		else
			condition = 1;
		i++;
	}
	if (condition == 1)
		return (0);
	else
		return (1);
}
