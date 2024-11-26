/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:54:08 by joaomart          #+#    #+#             */
/*   Updated: 2024/11/18 12:08:17 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_search_nl(const char *x, int flag)
{
	if (x == NULL)
		return (NULL);
	while (*x)
	{
		if ((unsigned char)*x == (unsigned char)flag)
			return ((char *)x);
		x++;
	}
	if ((*x == '\0') && (flag == '\0'))
		return ((char *)x);
	return (NULL);
}

int	ft_bufferlen(char *x)
{
	int	len;

	len = 0;
	if (x)
		while (x[len])
			len++;
	return (len);
}

char	*ft_strchunckjoin(char *buffer, char *chunck)
{
	int		counter;
	int		total_len;
	char	*temp;
	char	*ptr_buffer;

	if (!buffer || !chunck)
		return (NULL);
	ptr_buffer = buffer;
	total_len = ft_bufferlen(buffer) + ft_bufferlen(chunck);
	temp = malloc(sizeof(char) * total_len + 1);
	if (!temp)
		return (NULL);
	counter = 0;
	while (*buffer)
		temp[counter++] = *buffer++;
	while (*chunck)
		temp[counter++] = *chunck++;
	temp[counter] = '\0';
	if (ptr_buffer)
		free (ptr_buffer);
	return (temp);
}
