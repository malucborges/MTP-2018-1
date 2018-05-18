//Maria Luiza Camargos Borges Carneiro
//11721EBI002

#include <stdio.h>

int main()
{	
	char mens[256];
	char *p;
	int i, a, num, str[64];
	int *q;
	do{
	do
	{
		printf("Bem vindo(a) ao Menu! \nInsira: \n1 para Codificar. \n2 para Descodificar. \n3 para Sair.\nSua opcao e: ");
		scanf("%d", &num);
		getchar();
	}
	while(num != 1 && num != 2 && num != 3);
	i = 0;
	switch(num)
	{
		case 1:
			for(i = 0; i < 256; i++)
			mens[i] = '\0';
			printf("\nInsira uma mensagem: ");
			fgets(mens, 256, stdin);
			for(a = 0; mens[a] != '\0'; a++);	
			q = (int*) mens;
			printf("\nMensagem codificada: \n");
			for(i = 0; i < a; i++)	
			{
				if(*(q+i) != 0 )
				printf("%i ", *(q+i));
			} 
			break;
		case 2:
			printf("\nPara encerrar a sequencia de numeros insira o 0.\n");
			p = (char*)str;
			i = 0;
			a = 0;
			printf("\nInsira uma sequencia de numeros: ");
			do
			{
				scanf("%d", &a);
	 			getchar();
				str[i] = a;
				i++;
			}
			while(a != 0);
			p = (char*) &str;
			printf("\nMensagem descodificada: \n");
			for(i = 0; i < sizeof(str) && *(p+i) != 0; i++)
				printf("%c", *(p+i));
			break;
		case 3:
			printf("\nAte a proxima!");
			break;
		default: 
			break;
		}
	printf("\n\n");}
	while(num != 3);
	return 0;
}
