/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubeyazda <ubeyazda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:10:55 by ubeyazda          #+#    #+#             */
/*   Updated: 2023/09/20 17:32:32 by ubeyazda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ptr = (int *)malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (i < max - min)
	{
		ptr[i] = min + i;
		i++;
	}
	*range = ptr;
	return (max - min);
}
