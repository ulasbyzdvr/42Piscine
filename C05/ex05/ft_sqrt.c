/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubeyazda <ubeyazda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:01:12 by ubeyazda          #+#    #+#             */
/*   Updated: 2023/09/18 16:01:12 by ubeyazda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	index;

	index = 1;
	if (nb > 0)
	{
		while (index * index <= nb)
		{
			if (index * index == nb)
				return (index);
			else if (index >= 46341)
				return (0);
			index++;
		}
	}
	return (0);
}
