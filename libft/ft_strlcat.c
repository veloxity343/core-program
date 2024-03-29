/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheong <rcheong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:48:21 by rcheong           #+#    #+#             */
/*   Updated: 2024/03/04 15:51:33 by rcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	if (!dst && !size)
		return (0);
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= dstlen)
		return (srclen + size);
	i = 0;
	while (src[i] && (dstlen + i + 1) < size)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = 0;
	return (srclen + dstlen);
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		char *dest = argv[1];
		char *src = argv[2];
		size_t size = ft_atoi(argv[3]);
		size_t result = ft_strlcat(dest, src, size);
		printf("Modified string: %s\n", dest);
		printf("Length catenated: %zu\n", result);
	}
	return (0);
}*/