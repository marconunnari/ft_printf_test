/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fmt_parse.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <gguiulfo@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 22:48:30 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/04/11 21:29:00 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

t_bool		ft_chk_flags(const char **format, t_info *pfinfo)
{
	const char	flags[] = "-+ 0#";
	size_t		i;

	i = 0;
	while (flags[i] != **format && flags[i])
		i++;
	if (flags[i])
	{
		pfinfo->flags = pfinfo->flags | (1 << i);
		(*format)++;
		return (true);
	}
	return (false);
}

t_bool		ft_chk_width(const char **format, t_info *pfinfo, va_list ap)
{
	int res;

	res = 0;
	if (**format == '*')
	{
		pfinfo->width = va_arg(ap, int);
		if (pfinfo->width < 0)
		{
			if (!(pfinfo->flags & LFT))
				pfinfo->flags ^= LFT;
			pfinfo->width = pfinfo->width * -1;
		}
		(*format)++;
		return (true);
	}
	if (!ISDIGIT(**format))
		return (false);
	while (ISDIGIT(**format))
	{
		res = res * 10 + (**format - '0');
		(*format)++;
	}
	pfinfo->width = res;
	return (true);
}

t_bool		ft_chk_prec(const char **format, t_info *pfinfo, va_list ap)
{
	int res;

	res = 0;
	if (**format != '.')
		return (false);
	pfinfo->pset = 1;
	(*format)++;
	if (**format == '*')
	{
		pfinfo->prec = va_arg(ap, int);
		if (pfinfo->prec < -1)
			pfinfo->prec = -1;
		(*format)++;
		return (true);
	}
	while (ISDIGIT(**format))
	{
		res = res * 10 + (**format - '0');
		(*format)++;
	}
	pfinfo->prec = res;
	return (true);
}

t_bool		ft_chk_len(const char **format, t_info *pfinfo)
{
	const char	lengths[] = "hhlljz";
	int			i;

	i = 0;
	if (ISLENMOD(**format))
	{
		i = ft_findchr(lengths, **format);
		if (i == 0)
		{
			if (*(*format + 1) == 'h')
				++*format;
			else
				i = 1;
		}
		if (i == 2)
			i = (*(*format + 1) == 'l') ? 3 : 2;
		pfinfo->length = MAX(i, pfinfo->length);
		++*format;
		return (true);
	}
	return (false);
}
