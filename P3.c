// Maria Luiza Camargos Borges Carneiro
// 11721EBI002

#include <stdio.h>

int decimal(int num, int vet[256])
{
	int res[256], num1 = 0, variavel, i, j, base = 2;
	if(num < 0)
	{
		num1 = num;
		num = (-num) - 1;
		variavel = num;
	}
	else if(num >= 0)
	{
		num1 = num;
		variavel = num;
	}
	res[0] = 1;
	for(i = 0; num >= base; i++)
	{
		res[i] = num%base;
		num = (num/base);
		if(num < base)
		{
			i++;
			res[i] = num;
		}
	}
	if(variavel > base)
		i--;
	num = variavel;
	variavel = 32;
	for(j = 0; j < variavel; j++)
	{
		if(j < (variavel-(i+1)))
			vet[j] = 0;
		else
		{
			vet[j] = res[i];
			i--;
		}
		if(num1 < 0)
		{
			if(vet[j] == 0)
				vet[j] = 1;
			else if(vet[j] == 1)
				vet[j] = 0;
		}
	}
	return j;
}

int main ()
{
	int opcao, i, j, arg1, arg2, arg3, vett[256], vett1[256], vett2[256];
	do
	{
		printf("Bem vindo (a) a Calculadora Bitwise! \nSelecione uma das operaçoes abaixo."
		"\n1 - NOT \n2 - AND \n3 - OR \n4 - XOR \n5 - Right Shift \n6 - Left Shift \n7 - Sair.");
		printf("\nDigite sua opcao: ");
		scanf("%d", &opcao);
		getchar();
		switch(opcao)
		{
			case 1:
				printf("\nInsira um numero: ");
				scanf("%d", &arg1);
				getchar();
				j = decimal(arg1, vett);
				printf("\nNOT %d (", arg1);
				for(i = 0; i < j; i++)
				{
					printf("%d", vett[i]);
					if(i == (j - 1))
						printf(") :");
				}
				arg1 = ~arg1;
				j = decimal(arg1, vett1);
				printf("%d (", arg1);
				for(i = 0; i < j; i++)
				{
					printf("%d", vett1[i]);
					if(i == (j - 1))
						printf(") ");
				}
				printf("\n\n");
				break;
			case 2:
				printf("\nInsira dois numeros: ");
				scanf("%d %d", &arg1, &arg2);
				getchar();
				j = decimal(arg1, vett);
				printf("\n %d (", arg1);
				for(i = 0; i < j; i++)
				{
					printf("%d", vett[i]);
					if(i == (j-1))
						printf(") AND");
				}
				j = decimal(arg2, vett1);
				printf(" %d (", arg2);
				for(i = 0; i < j; i++)
				{
					printf("%d", vett1[i]);
					if(i == (j-1))
						printf(") :");
				}
				arg3 = arg1 & arg2;
				j= decimal(arg3, vett2);
				printf(" %d (" , arg3);
				for(i = 0; i < j; i++)
				{
					printf("%d", vett2[i]);
					if(i == (j-1))
						printf(") ");
				}
				printf("\n\n");
				break;
			
			case 3:
				printf("\nInsira dois numeros: ");
				scanf("%d %d", &arg1, &arg2);
				getchar();
				j = decimal(arg1, vett);
				printf("\n%d (", arg1);
				for(i = 0; i < j; i++)
				{
					printf("%d", vett[i]);
					if(i == (j-1))
						printf(") OR");
				}
				j = decimal(arg2, vett1);
				printf(" %d (", arg2);
				for(i = 0; i < j; i++)
				{
					printf("%d", vett1[i]);
					  if(i == (j-1))
					  	printf(") :");
				}
				arg3 = arg1 | arg2;
				j = decimal(arg3, vett2);
				printf(" %d (" , arg3);
				for(i = 0; i < j; i++)
				{
					printf("%d", vett2[i]);
					   if(i == (j-1))
					   	printf(") ");
				}
				printf("\n\n");
				break;
			case 4:
				printf("\nInsira dois numeros: ");
				scanf("%d %d", &arg1, &arg2);
				getchar();
				j = decimal(arg1, vett);
				printf("\n%d (", arg1);
				for(i = 0; i < j; i++)
				{
					printf("%d", vett[i]);
					if(i == (j-1))
						printf(") XOR");
				}
				j = decimal(arg2, vett1);
				printf(" %d (", arg2);
				for(i = 0; i < j; i++)
				{
					printf("%d", vett1[i]);
					if(i == (j-1))
						printf(") :");
				}
				arg3 = arg1 ^ arg2;
				j= decimal(arg3, vett2);
				printf(" %d (" , arg3);
				for(i = 0; i < j; i++)
				{
					printf("%d", vett2[i]);
					if(i == (j-1))
						printf(") ");
				}
				printf("\n\n");
				break;
			case 5:
				printf("\nInsira dois numeros: ");
				scanf("%d %d", &arg1, &arg2);
				getchar();
				j = decimal(arg1, vett);
				printf("\n%d (", arg1);
				for(i = 0; i < j; i++)
				{
					printf("%d", vett[i]);
					 if(i == (j-1))
					 	printf(") >>");	
				}
				j = decimal(arg2, vett1);
				printf(" %d (", arg2);
				for(i = 0; i < j; i++)
				{
					printf("%d", vett1[i]);
					if(i == (j-1))
						printf(") :");
				}
				arg3 = arg1 >> arg2;
				j= decimal(arg3, vett2);
				printf(" %d (" , arg3);
				for(i = 0; i < j; i++)
				{
					printf("%d", vett2[i]);
					if(i == (j-1))
						printf(") ");
				}
				printf("\n\n");
				break;
			case 6:
				printf("\nInsira dois numeros: ");
				scanf("%d %d", &arg1, &arg2);
				getchar();
				j = decimal(arg1, vett);
				printf("\n%d (", arg1);
				for(i = 0; i < j; i++)
				{
					printf("%d", vett[i]);
					if(i == (j-1))
						printf(") >>");	
				}
				j = decimal(arg2, vett1);
				printf(" %d (", arg2);
				for(i = 0; i < j; i++)
				{
					printf("%d", vett1[i]);
					if(i == (j-1))
						printf(") :");
				}
				arg3 = arg1 << arg2;
				j= decimal(arg3, vett2);
				printf(" %d (" ,arg3);
				for(i = 0; i < j; i++)
				{
					printf("%d", vett2[i]);
					if(i==(j-1))
						printf(") ");
				}
				printf("\n\n");
				break;
			default:
				break;
		}
	}
	while(1);
} 
				