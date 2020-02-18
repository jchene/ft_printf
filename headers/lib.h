/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 11:28:27 by jchene            #+#    #+#             */
/*   Updated: 2020/02/18 17:41:32 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

int		is_charset(char c, char *charset);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_strlcpy(char *dst, char *src, int nb);
void	ft_strcpy(char *dst, char *src);
void	ft_strncat(char *dst, char *src, int n);
int		int_len(int nb);
int		uint_len(unsigned int nb);
int		ul_len(unsigned long nb);
int		ft_atoi(char *str);
#endif
