/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtrabajo <gtrabajo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:08:37 by gabymb            #+#    #+#             */
/*   Updated: 2022/09/22 17:00:32 by gtrabajo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;
	int	max;

	if (!dst && !src)
		return (dst);
	i = -1;
	max = (int)len - 1;
	if (src < dst)
	{
		while (max >= 0)
		{
			((unsigned char *)dst)[max] = ((unsigned char *)src)[max];
			max--;
		}
	}
	else
	{
		while (++i < (int)len)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	return (dst);
}