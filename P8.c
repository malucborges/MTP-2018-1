//Maria Luiza Camargos Borges Carneiro
//11721EBI002

#include <stdio.h>
#include <stdlib.h>

void gera_numeros(float * vetor, int tam)
{
	int i;  
	for(i = 0; i < tam; i++) 
		vetor[i] = (float) rand()/(float) RAND_MAX + 0.5f;
}

float soma(float vetor[], int n)
{
	if (n == 0)
		return 0;
   else
   {
      float s;
      s = soma(vetor, n-1);
      if (vetor[n-1] > 0) 
		s = s + vetor[n-1];
      return (s);
	}
}

float prod(float vetor[], int n)
{
	float mult = 1.0f;
	for(int i = 0; i < n; i++)
		mult = mult*vetor[i];
	return mult;
}

int main()
{
	srand(123456); 
	int opcao, n = 100;
	float num[100];
	gera_numeros(num, n);
	do
	{
		printf("\nBem vindo ao Menu!\n\nInsira: \n1 - Para obter o somatorio.\n2 - Para obter o produto.\n3 - Para sair do programa.");
		printf("\nInsira a opcao: ");
		scanf("%d", &opcao);	
		getchar();
		switch(opcao)
		{
			case 1:
				printf("\nO somatorio dos numeros e: %f\n", soma(num, n));
				break;
			case 2:
				printf("\nO produto dos numeros e: %f\n", prod(num,n));
				break;
			case 3:
				return 0;
			default:
				break;
		}
	}
	while(opcao != 4);
	return 0;
}
