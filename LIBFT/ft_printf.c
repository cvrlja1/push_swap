/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicvrlja <nicvrlja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:52:02 by nicvrlja          #+#    #+#             */
/*   Updated: 2024/05/20 19:46:13 by nicvrlja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charset(unsigned char c)
{
	char	*set;

	set = "cspdiuxX%";
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static void	ft_format(unsigned char c, va_list vals, int *counter)
{
	if (c == 'c')
	{
		ft_putchar(va_arg(vals, int));
		(*counter)++;
	}
	else if (c == 's')
		ft_putstr(va_arg(vals, char *), counter);
	else if (c == 'd' || c == 'i')
		ft_printid(va_arg(vals, int), counter);
	else if (c == 'x')
		ft_print_hexa_lower(va_arg(vals, unsigned int), counter);
	else if (c == 'X')
		ft_print_hexa_upper(va_arg(vals, unsigned int), counter);
	else if (c == '%')
	{
		ft_putchar('%');
		(*counter)++;
	}
	else if (c == 'u')
		ft_printuns(va_arg(vals, unsigned int), counter);
	else if (c == 'p')
		ft_print_pointer(va_arg(vals, unsigned long), counter);
}

int	ft_printf(const char *s, ...)
{
	int		counter;
	va_list	args;

	va_start(args, s);
	if (!s)
		return (-1);
	counter = 0;
	while (*s)
	{
		if (*s == '%' && ft_charset(*(s + 1)) == 1)
		{
			ft_format(*(s + 1), args, &counter);
			s += 2;
		}
		else if (*s == '%' && ft_charset(*(s + 1)) == 0)
			return (-1);
		if (*s != '\0' && *s != '%')
		{
			ft_putchar(*s);
			s++;
			counter++;
		}
	}
	va_end(args);
	return (counter);
}
