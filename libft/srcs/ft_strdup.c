/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schuah <schuah@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 19:26:25 by schuah            #+#    #+#             */
/*   Updated: 2022/10/21 14:40:42 by schuah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*copy;
	int		counter;
	int		index;

	if (!src)
		return (NULL);
	counter = 0;
	while (src[counter] != '\0')
		counter++;
	copy = malloc(sizeof(char) * (counter + 1));
	if (copy == NULL)
		return (0);
	index = -1;
	while (src[++index] != '\0')
		copy[index] = src[index];
	copy[index] = '\0';
	return (copy);
}
