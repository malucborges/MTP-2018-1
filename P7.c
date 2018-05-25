//Maria Luiza Camargos Borges Carneiro
//11721EBI002

#include <stdio.h>

int ackermann(int a, int b)
{
	int final;
	if(a == 0)
		return b + 1;
	else if(b == 0)
		return ackermann(a - 1, 1);
	else
	{
		final = ackermann(a - 1, ackermann (a, b - 1));
		return final;		
	} 
}

int main()
{
	int a, b, fim;
	printf("\nInsira o numero 1: ");
	scanf("%d", &a);
	getchar();
	printf("\nInsira o numero 2: ");
	scanf("%d", &b);
	getchar();
	fim = ackermann (a, b);
	printf("\nResultado: %d", fim);
	return 0;
}
