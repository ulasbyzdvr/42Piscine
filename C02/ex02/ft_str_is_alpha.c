/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubeyazda <ubeyazda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:29:20 by ubeyazda          #+#    #+#             */
/*   Updated: 2023/09/06 18:13:23 by ubeyazda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		condition;

	condition = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
		}
		else if ((str[i] >= 'A') && (str[i] <= 'Z'))
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
