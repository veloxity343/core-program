/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheong <rcheong@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:53:41 by rcheong           #+#    #+#             */
/*   Updated: 2024/03/04 14:49:10 by rcheong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void	*ptr;
	size_t	len;

	len = ft_strlen(s1);
	ptr = malloc(len + 1);
	if (!ptr)
		return (0);
	return ((char *) ft_memmove(ptr, s1, len + 1));
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		char *result = ft_strdup(argv[1]);
		if (result == NULL)
		{
			printf("Memory allocation failed\n");
			return (1);
		}
		printf("%s\n", result);
		free(result);
	}
	return (0);
}*/