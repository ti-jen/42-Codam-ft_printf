/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 12:09:29 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/31 14:47:34 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	int i = 0;
	va_list arg;
	va_start(arg, format);
	while(format[i] != '\0')
	{
	i = ft_strprint(format, i);
	if (format[i] == '\0')
	{
		va_end(arg);
		return(i);
	}
	else if(format[i + 1] == 'c')
		ft_putchar(va_arg(arg, int));
	else if(format[i + 1] == 's')
		ft_putstr(va_arg(arg, char*));
	else if(format[i + 1] == 'p')
		ft_putadres(va_arg(arg, unsigned long));
	else if(format[i + 1] == 'd')
		ft_putdec(va_arg(arg, int));
	else if(format[i + 1] == 'i' || format[i + 1] == 'u' )
		ft_putint(va_arg(arg, int));
	else if(format[i + 1] == 'x')
		ft_puthexlow(va_arg(arg, int));
	else if(format[i + 1] == 'X')
		ft_puthexhigh(va_arg(arg, int));
	else if(format[i + 1] == '%')
		write(1, "%",1);
	i = i + 2;
	}
	return (i);
}


// int main ()
// {
// 	char i = 'A';
// 	char b = 'c';
// 	ft_printf("loongtext == %c--%c-", i, b);
// }