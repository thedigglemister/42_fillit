/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 20:05:44 by biremong          #+#    #+#             */
/*   Updated: 2016/12/02 12:01:02 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (-1);
	while (*s1 == *s2 && *s1 != '\0' && n)
	{
		s1++;
		s2++;
		n--;
	}
	if (*s1 == *s2 || n == 0)
		return (1);
	return (0);
}
