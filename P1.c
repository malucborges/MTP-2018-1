// Maria Luiza Camargos Borges Carneiro
// 11721EBI002

#include <stdio.h>

int main()
{
	char bits[256];
	int estado, aut, i;
	printf("Insira um numero binario: ");
	scanf("%s", &bits);
	for(i = 0; bits [i] != '\0'; i++)
	{
		if (estado == 0 && bits [i] == '1')
			aut = 1;
		if (estado == 0 && bits [i] == '0')
			aut = 0;
		if (estado == 1 && bits [i] == '1')
			aut = 0;
		if (estado == 1 && bits [i] == '0')
			aut = 2;
		if (estado == 2 && bits [i] == '1')
			aut = 2;
		if (estado == 2 && bits [i] == '0')
			aut = 1;
	estado = aut;
	aut = 0;
	}
	if (estado == 0)
		printf("\nO numero binario %s e multiplo de 3.", bits);
	else 
		printf("\nO numero binario %s nao e multiplo de 3.", bits);
	return 0;
}
