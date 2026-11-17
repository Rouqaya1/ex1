/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 16:27:20 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/16 16:23:16 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (nptr[i] == ' ')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= sign;
		i++;
	}
	while ('0' <= nptr[i] && nptr[i] <= '9')
		res = res * 10 + (nptr[i++] - '0');
	return (res * sign);
}

/*int main(void) {
  char *tab = "  --78eqe";
  printf("Resultat : %d\n", ft_atoi(tab));
  printf("Resultat de la vrai fonction %d", atoi(tab));
  return 0;
}
  */