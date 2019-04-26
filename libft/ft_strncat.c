/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agusev <agusev@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 14:46:47 by agusev            #+#    #+#             */
/*   Updated: 2019/04/25 22:05:44 by agusev           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	size_t	c;

	i = 0;
	c = 0;
	while (n > 0)
	{
		if (c > 0 || !s1[i])
		{
			s1[i] = s2[c];
			c += 1;
			if (!s2[c] || c == n)
			{
				s1[i + 1] = '\0';
				return (s1);
			}
		}
		i += 1;
	}
	return (s1);
}