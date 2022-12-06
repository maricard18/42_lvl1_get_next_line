/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maricard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:13:49 by maricard          #+#    #+#             */
/*   Updated: 2022/12/06 11:56:16 by maricard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

//C libraries
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

//Buffer size
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

//Function Prototypes
char	*get_next_line(int fd);
char	*ft_buf(int fd, char *stash);
char	*ft_get_line(char *stash);
char	*ft_remove_line(char *stash);

//Utility functions
int		ft_strchr(char *buf, char c);
char	*ft_strjoin(char *str1, char *str2);
int		ft_strlen(char *str);

#endif
