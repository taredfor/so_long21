/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taredfor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 16:50:46 by taredfor          #+#    #+#             */
/*   Updated: 2021/08/26 16:50:47 by taredfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	j;

	if (s)
	{
		i = 0;
		j = ft_strlen(s);
		while (i < j)
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}
