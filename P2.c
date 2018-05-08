// Maria Luiza Camargos Borges Carneiro
// 11721EBI002

#include <stdio.h>

void decimal(int base)
{
	int res[256], num, i, variavel;
	printf("\nInsira o numero em decimal para ser convertido: ");
	scanf("%d", &num);
	variavel = num;
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
	i--;
	if(base == 16)
	{
		printf("\nNumero convertido: ");
		if(variavel >= base)
		{
			do
			{
				printf("%X", res[i]);
				i--;
			}
			while (i >= 0);
		}
		else (variavel < base);
			printf("%X", num);
	}
	else
	{
		printf("\nNumero convertido: ");
		do
		{
			printf("%d", res[i]);
			i--;
		}
		while(i >= 0);
	}
	printf("\n\n");
}

void binario(int base)
{
	int res1[256], res2[256], num, i, j=0, variavel, n = 1, soma = 0, k = 0;
	char res[256];
	printf("\nInsira o numero em binario para ser convertido: ");
	scanf("%s", &res);
	for(i= 0; res[i] != '\0'; i++);
	i--;
	k = i;
	do
	{
		if(res[i] == '0')
			res1[i] = 0;
		if(res[i] == '1')
			res1[i] = 1;
		i--;
	}
	while(i >= 0);
	i = k;
	do
	{
		for(k = 0; k < j; k++)
		{
			n = n*2;
		}
		soma = soma + res1[i]*n;
		n = 1;
		i--;
		j++;
	}
	while(i >= 0);
	if(base !=  16)
		printf("\nNumero convertido: %d", soma);
	if(base == 16)
	{
		if(soma >= base)
		{
			for(i = 0; soma >= base; i++)
			{
				res2[i] = soma%base;
				soma = (soma/base);
				if(soma < base)
				{
					i++;
					res2[i] = soma;
				}
			}
			i--;
			if(base == 16)
			{
				printf("\nNumero convertido: ");
				do
				{
					printf("%X", res2[i]);
					i--;
				}
				while(i >= 0);
			}
		}
		else
		{
			res2[i] = soma;
			if(base == 16)
			{
				printf("\nNumero convertido: ");
				do
				{
					printf("%X", res2[i]);
					i--;
				}
				while(i>=0);
			}
		}
		printf("\n\n");
	}
}

void hexadecimal(int base)
{
	char res[256];
	int res1[256], num, i, j = 0, variavel, n = 1, soma = 0, k = 0;
	printf("\nInsira o numero em hexadecimal para ser convertido: ");
	scanf("%s", &res);
	for(i = 0; res[i] != '\0'; i++);
	i--;
	variavel = i;
	k = i;
	do
	{
		if(res[i] == 'A' || res[i] == 'a')
			{res[i] = 10;}
		if(res[i] == 'B' || res[i] == 'b')
			{res[i] = 11;}
		if(res[i] == 'C' || res[i] == 'c')
			{res[i] = 12;}
		if(res[i] == 'D' || res[i] == 'd')
			{res[i] = 13;}
		if(res[i] == 'E' || res[i] == 'e')
			{res[i] = 14;}
		if(res[i] == 'F' || res[i] == 'f')
			{res[i] = 15;}
		else 
			{res1[i] = res1[i] - 48;}
		i--;
	}
	while(i>=0);
	i = variavel;
	do
	{
		for(k = 0; k < j; k++)
		{
			n = n * 16;
		}
		soma = soma + (res[i]*n);
		n = 1;
		i--;
		j++;
	}
	while(i >= 0);
	if(base != 2)
			printf("\nNumero convertido: %d", soma);
	if(base == 2)
	{
		for(i = 0; soma >= base; i++)
		{
			res[i] = soma%base;
			soma = (soma/base);
			if(soma < base)
			{
				i++;
				res[i] = soma;
			}
		}
		i--;
		printf("\nNumero convertido: ");
		do
		{
			printf("%d", res[i]);
			i--;
		}
		while(i >= 0);
	}
		printf("\n\n");
}

void octal(int base)
{
	char res[256];
	int res1[256], num, i, j = 0, variavel, n = 1, soma = 0, k = 0;
	printf("\nDigite o numero em octal para ser convertido: ");
	scanf("%s", &res);
	for(i = 0; res[i] != '\0'; i++);
	i--;
	variavel = i;
	k = i;
	do
	{
		res[i] = res[i] - 48;
		i--;
	}
	while(i>=0);
	i = variavel;
	do
	{
		for(k = 0; k < j; k++)
		{
			n = n*8;
		}
		soma = soma + (res[i]*n);
		n = 1;
		i--;
		j++;
	}
		while(i >= 0);
		printf("\nNumero convertido: %d", soma);
		printf("\n\n");
}

int main() 
{
	int opcao, bin = 2, oct = 8, hexa = 16;
	do
	{
		printf("\n 1- Conversao de Binario para Decimal. \n 2- Conversao de Binario para Hexadecimal. "
		"\n 3- Conversao de Hexadecimal para Decimal. \n 4- Conversao de Hexadecimal para Binario. "
		"\n 5- Conversao de Decimal para Binario. \n 6- Conversao de Decimal para Hexadecimal. "
		"\n 7- Conversao de Octal para Decimal. \n 8- Conversao de Decimal para Octal. \n 9- Sair. \n");
		printf("\nDigite sua opcao: ");
		scanf("%d", &opcao);
		getchar();
		switch(opcao)
		{
			case 1:
				binario(bin);
				break;
			case 2:
				binario(hexa);
				break;
			case 3:
				hexadecimal(hexa);
				break;
			case 4:
				hexadecimal(bin);
				break;
			case 5:
				decimal(bin);
				break;
			case 6:
				decimal(hexa);
				break;
			case 7:
				octal(oct);
				break;
			case 8: 
				decimal(oct);
				break;
			case 9:
				break;
			default:
				break;
		}
	}
	while(opcao != 9);
	return 0;
}
