#include <stdio.h>

int main()
{
	char numero[256];
	int x[256], i, j = 0, k = 0;
	printf("Insira um numero: ");
	scanf("%s", &numero);
	for(i = 0; numero[i] != '\0'; i++)
	{
		if(numero[i] > 47 && numero[i] < 58)
		{
			x[j] = numero[i] - 48;
			j++;
		}
	}
	printf("\nNumero inteiro = ");
	do
	{
		printf("%d", x[k]);
		k++;
	}
	while(k < j);
	return 0;
}