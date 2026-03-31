/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 12:06:13 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/31 14:44:08 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_printf(const char *format, ...);
int	ft_strprint(const char *str, int count);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putadres(unsigned long adr);
void	ft_putdec(int n);
void 	ft_putint(int n);
void ft_puthexhigh(int n);
void ft_puthexlow(int n);