/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libasm.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: liz <liz@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/06/30 11:19:42 by liz           #+#    #+#                 */
/*   Updated: 2020/07/18 15:35:28 by lbisscho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
#define LIBASM_H

# include <string.h>
# include <errno.h>

size_t		ft_strlen(const char *str);
char		*ft_strcpy(char *dest, const char *src);
char		*ft_strdup(const char *s);
int			ft_strcmp(const char *s1, const char *s2);
char		*ft_strdup(const char *s);
ssize_t     ft_write(int fildes,  const void *buf, size_t nbyte);
ssize_t     ft_read(int fd, const void *buf, size_t nbyte);

#endif