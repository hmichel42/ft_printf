/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   wp_streat.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: hmichel <hmichel@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/04/11 17:20:00 by hmichel      #+#   ##    ##    #+#       */
/*   Updated: 2019/05/23 03:59:23 by hmichel     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/printf.h"

static int	ft_printnull(t_flag flag, char *string)
{
	if (string || !flag.point || !flag.precision)
		return (0);
	//write(1, "(null)", flag.precision): affiche un cara imaginaire lors du depassement
	ft_putchar('(');
	if (flag.precision >= 2)
		ft_putchar('n');
	if (flag.precision >= 3)
		ft_putchar('u');
	if (flag.precision >= 4)
		ft_putchar('l');
	if (flag.precision >= 5)
		ft_putchar('l');
	if (flag.precision >= 6)
		ft_putchar(')');
	return ((flag.precision <= 6) ? flag.precision : 6);
}

int			wp_streat(t_flag flag, char *string) //traiter une option s
{
    int		putspace;
    size_t	i;
    int		nb_char;

    nb_char = 0;
    i = 0;
	putspace = (string) ? flag.width - ft_strlen(string) : flag.width;
    putspace = (string && flag.point && flag.precision < ft_strlen(string)) ? flag.width - flag.precision : putspace;
	if (!flag.point && flag.width <= ft_strlen(string))
		putspace = 0;
	// GERER AJOUT DEVANT STRING
	if (flag.point && !flag.precision && flag.width > 0 && !flag.minus)
	{
		while (i < flag.width)
		{
			if (flag.zero)
				nb_char += ft_putchar_add('0');
			else
                nb_char += ft_putchar_add(' ');
			i++;
        }
    }
    if (flag.width && !flag.minus)
    {
        if (!string || (putspace > 0))
        {
            while (i++ < putspace)
            {
                if (flag.zero > 0)
                    nb_char += ft_putchar_add('0');
                else
                    nb_char += ft_putchar_add(' ');
            }
        }
    }
	// IMPRIME LA STRING
	if (flag.point && flag.precision > 0)
	{
		i = 0;
		while (string && i < ft_strlen(string) && i < flag.precision)
			nb_char += ft_putchar_add(string[i++]);
		nb_char += ft_printnull(flag, string);
	}
	if (!flag.point)
	{	
		ft_putstr(string);
		nb_char += ft_strlen(string);
	}
	// GERE LE MOINS
	if (flag.width > 0 && flag.minus)
    {
		i = 0;
        if (!string || (!flag.precision && (size_t)flag.width > ft_strlen(string)))
        {
            while (i++ < putspace)
                nb_char += ft_putchar_add(' ');
        }
		if (string && flag.point)
			while (nb_char < flag.width)
				nb_char += ft_putchar_add(' ');
    }
    return (nb_char);
}