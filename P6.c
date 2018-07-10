//Maria Luiza Camargos Borges Carneiro
//11721EBI002

#include <stdio.h>

int soma(int vet[20], int n)
{
	if(n == 0)
		return 0;
	else 
	{
		int s;
		s = soma (vet, n-1);
		s = s + vet[n-1];
		return (s);
	}
}

float media(int soma, float p)
{
	float res;
	res = soma/p;
	return res;
}

void preenche(int vet[20])
{
	int i;
	for(i = 0; i < 20; i++)
		vet[i] = 0;
}

int main ()
{
	int vet[20], i, sominha, num;
	float p;
	printf("Insira a quantidade de numeros inteiros: ");
	scanf("%d", &num);
	preenche(vet);
	for(i = 0; i < num; i++)
	{
		printf("\nDigite o numero %d: ", i+1);
		scanf("%d", &vet[i]);
		getchar();
		if(vet[i] != 0)
			p++;
	}
	sominha = (soma(vet, num));
	printf("\nA media dos numeros e: %.1f", media(sominha, p));
	return 0;
}
