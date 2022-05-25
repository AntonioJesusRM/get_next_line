/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:20:18 by aruiz-mo          #+#    #+#             */
/*   Updated: 2022/05/13 11:11:23 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

unsigned int	ft_strlen(const char *s);
int				ft_line_len(char *ptr);
void			*ft_memcpy(void *dst, const void *src, unsigned int n);
char			*ft_strchr(const char *s, int c);
char			*ft_strjoin(char const *s1, char const *s2);
void			ft_clean_memory(char **memory);
int				ft_fill_memory(char **memory, int fd);
char			*ft_get_line(char **memory);
char			*get_next_line(int fd);

#endif