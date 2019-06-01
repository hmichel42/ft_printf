/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   wp_ftreat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hmichel <hmichel@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/05/20 19:35:54 by hmichel      #+#   ##    ##    #+#       */
/*   Updated: 2019/05/23 03:37:32 by hmichel     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include "includes/printf.h"
#include <stdio.h>

double long		ft_pow10(double long f, int exp)
{
	while (exp)
	{
		f = f * 10;
		exp--;
	}
	return (f);
}

char			*ft_rounded(double flo, t_flag flag, int option)
{
	char		*digit;
	char		*temp;
	int			preci;
	int			i;
	long		enti;

	preci = flag.precision;
	enti = (long)flo;
	flo = flo - (double)enti;
	if (!(digit = ft_strnew(0)))
		return (NULL);
	while (preci--)
	{
		flo = flo * 10;
		if (!(temp = ft_strjoin(digit, ft_itoa_base((long)flo, 10))))
			return (NULL);
		flo = flo - (long)flo;
		free(digit);
		digit = ft_strdup(temp);
		free(temp);
	}
	flo = ft_pow10(flo, 1);
	if ((long)flo == 5 && (flag.precision == 1 || (flag.precision == 0 && flag.point == 1)) && (enti % 2 == 1)) //arrondi type banque tmtc la zeub ca nous connait
		enti += 1;
	if ((long)flo > 5 || ((long)flo == 5 && (flo - (long)flo) > 0.0)) // <=> flo >= 5
	{
		i = 1;
		while (ft_strlen(digit) >= i)
		{
			if (ft_strlen(digit) == i && digit[ft_strlen(digit) - i] == '9')
				enti += 1;
			if (digit[ft_strlen(digit) - i] != '9')
			{
				digit[ft_strlen(digit) - i] += 1;
				break;
			}
			else if (digit[ft_strlen(digit) - i] == '9')
				digit[ft_strlen(digit) - i] = '0';
			i++;
		}
		if (ft_strlen(digit) == 0)
			enti += 1;
	}
	temp = ft_itoa_base(enti, 10);
	if (!option)
		return (digit);
	return (temp);
}

static	char	*ft_ftoa(double f, t_flag flag)
{
	char		*nb;
	char		*temp;
	int			zero;

	if (!(nb = ft_rounded(f, flag, 1)))
		return (NULL);
	if (flag.point && flag.precision == 0)
		return (nb);
	if (!(temp = ft_strjoin(nb, ".")))
		return (NULL);
	free(nb);
	zero = flag.precision - ft_strlen(ft_rounded(f, flag, 0));
	if (!(nb = ft_strjoin(temp, ft_rounded(f, flag, 0))))
		return (NULL);
	while (zero-- != 0)
	{
		free(temp);
		temp = ft_strdup(nb);
		free(nb);
		if (!(nb = ft_strjoin(temp, "0")))
			return (NULL);
	}
	return (nb);
}

int		wp_ftreat(t_flag flag, double nb)
{
	int		nb_char;
	char	*str;
	int		putspace;

	if (!flag.point)
		flag.precision = 6;
	str = ft_ftoa(nb, flag);
	nb_char = 0;
	putspace = (str) ? flag.width - ft_strlen(str) - flag.plus : flag.width - flag.plus;
	if ((flag.hashtag && flag.point && !flag.precision) || flag.space)
		putspace -= 1;
	// AVANT NB
	if (flag.space)
		nb_char += ft_putchar_add(' ');
	if (putspace > 0 && !flag.minus)
	{
		while (putspace--)
		{
			if (flag.zero)
				nb_char += ft_putchar_add('0');
			else
				nb_char += ft_putchar_add(' ');
		}
	}
	// PRINT NB
	if (flag.plus) //pb de -0.0 et +0.0
	{
		if (nb >= 0)
			nb_char += ft_putchar_add('+');
		if (nb < 0)
			nb_char += ft_putchar_add('-');
	}
	if (str)
		nb_char += ft_strlen(str);
	ft_putstr(str);
	// APRES NB
	if (flag.hashtag && flag.point && !flag.precision)
		nb_char += ft_putchar_add('.');
	if (putspace > 0 && flag.minus) // le flag '-' ecrase le flag '0'
		while (putspace--)
			nb_char += ft_putchar_add(' ');
	return (nb_char);
}
