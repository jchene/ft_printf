/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchene <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 11:28:27 by jchene            #+#    #+#             */
/*   Updated: 2020/02/13 18:31:35 by jchene           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

int		is_charset(char c, char *charset);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_strcpy(char *dst, char *src);
void	ft_strncat(char *dst, char *src, int n);
int		int_len(int nb);
int		uint_len(unsigned int nb);
int		ft_atoi(char *str);
#endif
