/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparadis <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:56:49 by jparadis          #+#    #+#             */
/*   Updated: 2022/03/07 15:47:09 by jparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a;
	int b;
	int div;
	int mod;
	
	a = 90;
	b = 32;

	printf("a = %d b = %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("div = %d mod = %d\n", div, mod);
	return(0);
}
