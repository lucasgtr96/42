/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucagaut <lucagaut@student.42.fr>              +#+  +:+       +#+    */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 10:42:04 by lucagaut            #+#    #+#           */
/*   Updated: 2025/02/09 09:24:59 by lucagaut           ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main()
{

  printf("%d", ft_isalnum(54));
  printf("%d", ft_isalnum(61));
  printf("%d", ft_isalnum(102));
  printf("%d", ft_isalnum(112));
  printf("%d", ft_isalnum(131));

}
*/
