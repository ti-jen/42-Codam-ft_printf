/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 12:09:29 by tkroon            #+#    #+#             */
/*   Updated: 2026/04/01 11:49:37 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"
#include <stdio.h>

int ft_printf(const char *format, ...)
{
	int i = 0;
	int j = 0;
	int c = 0;
	va_list arg;
	va_start(arg, format);
	while(format[i] != '\0')
	{
	j = ft_strprint(format, i);
	i = i + j;
	c = c + j;
	if (format[i] == '\0')
	{
		va_end(arg);
		return(c);
	}
	else if(format[i + 1] == 'c')
		c = c + ft_putchar(va_arg(arg, int));
	else if(format[i + 1] == 's')
		c = c + ft_putstr(va_arg(arg, char*));
	else if(format[i + 1] == 'p')
		c = c + ft_putadres(va_arg(arg, unsigned long));
	else if(format[i + 1] == 'd' || format[i + 1] == 'i')
		c = c + ft_putdec(va_arg(arg, int));
	else if(format[i + 1] == 'u' )
		c = c + ft_putudec(va_arg(arg, unsigned long));
	else if(format[i + 1] == 'x')
		c = c + ft_puthexlow(va_arg(arg, int));
	else if(format[i + 1] == 'X')
		c = c + ft_puthexhigh(va_arg(arg, int));
	else if(format[i + 1] == '%')
		{
			write(1, "%",1);
			c++;
		}
	i = i + 2;		
	}
	return (c);
}


// int main ()
// {
// 	char i = 'A';
// 	char b = 'c';
// 	ft_printf("loongtext == %c--%c-", i, b);
// }