#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int x;
	int y;

	x = 13;
	y = 5;

	printf("valeur de x = %d valeur de y = %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("résultat de division = %d résultat de modulo = %d\n", x, y)
		return(0);
}
