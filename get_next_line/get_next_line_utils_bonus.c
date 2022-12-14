/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:58:55 by maricard          #+#    #+#             */
/*   Updated: 2022/12/06 17:29:55 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strchr(char *buf, char c)
{
	int	i;

	i = 0;
	if (!buf)
		return (0);
	while (buf[i])
	{
		if (buf[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *str1, char *str2)
{
	int		i;
	int		a;
	char	*str;

	if (!str1)
		return (0);
	i = ft_strlen(str1);
	a = ft_strlen(str2);
	str = malloc(sizeof(char) * ((i + a) + 1));
	if (!str)
		return (0);
	i = 0;
	a = 0;
	while (str1[i])
	{
		str[a++] = str1[i++];
	}
	i = 0;
	while (str2[i])
	{
		str[a++] = str2[i++];
	}
	str[a] = '\0';
	free(str1);
	return (str);
}
