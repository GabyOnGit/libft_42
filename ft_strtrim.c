/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabymb <gabymb@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:43:57 by gabymb            #+#    #+#             */
/*   Updated: 2022/11/15 13:58:33 by gabymb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		size;

	size = ft_strlen(s1);
	i = 0;
	j = size - 1;
	if (j < 0)
		return (ft_substr(s1, 0, 1));
	while (ft_strchr(set, s1[i]) || ft_strchr(set, s1[j]))
	{
		if (ft_strchr(set, s1[i]))
			i++;
		else if (ft_strchr(set, s1[j]))
			j--;
	}
	str = ft_substr(s1, i, j - i + 1);
	return (str);
}
