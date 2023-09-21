/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubeyazda <ubeyazda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:19:22 by ubeyazda          #+#    #+#             */
/*   Updated: 2023/09/19 18:38:04 by ubeyazda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
