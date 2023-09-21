/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubeyazda <ubeyazda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:11:33 by ubeyazda          #+#    #+#             */
/*   Updated: 2023/09/18 13:11:33 by ubeyazda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_av(int ac, char **av)
{
	int	i;

	ac = ac -1;
	while (ac > 0)
	{
		i = 0;
		while (av[ac][i])
		{
			write(1, &av[ac][i], 1);
			i++;
		}
		write(1, "\n", 1);
		ac--;
	}
}

int	main(int ac, char **av)
{
	ft_av(ac, av);
}
