/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubeyazda <ubeyazda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:00:05 by ubeyazda          #+#    #+#             */
/*   Updated: 2023/09/18 16:00:05 by ubeyazda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	total;

	total = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (total);
	while (nb > 0)
	{
		total *= nb;
		nb--;
	}
	return (total);
}
