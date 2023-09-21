/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubeyazda <ubeyazda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:36:18 by ubeyazda          #+#    #+#             */
/*   Updated: 2023/09/06 11:21:41 by ubeyazda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	character;

	index = 0;
	while (index < size / 2)
	{
		character = tab[index];
		tab[index] = tab[size - index - 1];
		tab[size - index - 1] = character;
		index++;
	}
}
