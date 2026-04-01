/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 12:06:13 by tkroon            #+#    #+#             */
/*   Updated: 2026/04/01 14:54:29 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf(const char *format, ...);
int	ft_strprint(const char *str, int count);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putadres(unsigned long adr);
int	ft_putdec(int n);
int	ft_putudec(unsigned int n);
int	ft_puthexhigh(unsigned int n);
int	ft_puthexlow(unsigned int n);
