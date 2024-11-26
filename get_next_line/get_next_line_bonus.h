/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaomart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:34:23 by joaomart          #+#    #+#             */
/*   Updated: 2024/11/18 12:37:18 by joaomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*ft_chunckjoin(int fd, char *buffer);
char	*ft_finalstr(char *buffer);
char	*ft_nextgnl(char *buffer);
char	*ft_search_nl(const char *x, int flag);
int		ft_bufferlen(char *x);
char	*ft_strchunckjoin(char *buffer, char *chunck);

#endif
