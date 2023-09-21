/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubeyazda <ubeyazda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:13:17 by ubeyazda          #+#    #+#             */
/*   Updated: 2023/09/21 15:01:29 by ubeyazda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_free(struct s_stock_str *str, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(str[i].copy);
		i++;
	}
	free(str);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*cpy;

	if (src == NULL)
	{
		return (NULL);
	}
	len = ft_strlen(src);
	cpy = (char *)malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
	{
		return (NULL);
	}
	ft_strcpy(cpy, src);
	return (cpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*arr;
	int					len;
	int					i;

	if (ac <= 0 || av == NULL)
		return (NULL);
	arr = (struct s_stock_str *)malloc((ac + 1) * sizeof(struct s_stock_str));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		len = ft_strlen(av[i]);
		arr[i].size = len;
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		if (arr[i].copy == NULL)
		{
			ft_free(&arr[i], i);
			return (NULL);
		}
		i++;
	}
	arr[ac].str = NULL;
	return (arr);
}
