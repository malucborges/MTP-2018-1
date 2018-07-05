//Maria Luiza Camargos Borges Carneiro
//11721EBI002

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct dimensao
{
	float largura;
	float profundidade;
	float altura;
};

struct produto
{
	char nome[64];
	float preco;
	struct dimensao end;
};

void cadastro(struct produto vet_produto[], int i){
	printf("\nDigite o nome:");
	fgets(vet_produto[i].nome, 64, stdin);
	printf("\nDigite o preco:");
	scanf("%f", &vet_produto[i].preco);
	getchar();
	printf("\nDigite a largura:");
	scanf("%f", &vet_produto[i].end.largura);
	getchar();
	printf("\nDigite a profundidade:");
	scanf("%f", &vet_produto[i].end.profundidade);
	getchar();
	printf("\nDigite a altura:");
	scanf("%f", &vet_produto[i].end.altura);
	getchar();
}

void pesquisa(struct produto vet_produto[], int i){
	char condicional[64];
	strcpy(condicional, " ");
	if(strcmp(condicional, vet_produto[i].nome) == 0){
		printf("\nProduto nao cadastrado!");
	}
	else{
		printf("\n %s, R$ %.2f, L: %.2fm x P: %.2fm x A: %.2fm",vet_produto[i].nome, vet_produto[i].preco, vet_produto[i].end.largura, vet_produto[i].end.profundidade, vet_produto[i].end.altura);
	}
}

int main()
{
	struct produto vet_produto[2];
	int opcao, produto, num_produto = 0;
	strcpy(vet_produto[0].nome, " ");
	strcpy(vet_produto[1].nome, " ");
	do{
	printf("\n\n1 - Cadastro\n2 - Consulta\n3 - Sair\n\nDigite uma opcao: ");
	scanf("%d", &opcao);
	getchar();  
	switch(opcao)
	{
		case 1: 
			printf("\nEscolha o produto 1 ou 2:");
			scanf("%d", &produto);
			getchar();
			switch(produto){
				case 1:
					num_produto = produto -1;
					cadastro(vet_produto, num_produto);
					printf("\nProduto 1 cadastrado com sucesso");
					num_produto = 0;
					break;
				case 2:
					num_produto = produto -1;
					cadastro(vet_produto, num_produto);
					printf("\nProduto 2 cadastrado com sucesso");
					num_produto = 0;
					break;
				default:
					break;
			}
			break;
		case 2:	
			printf("\nEscolha o produto 1 ou 2:");
			scanf("%d", &produto);
			getchar();
			switch(produto){
				case 1:
					num_produto = produto -1;
					pesquisa(vet_produto, num_produto);
					num_produto = 0;
					break;
				case 2:
					num_produto = produto -1;
					pesquisa(vet_produto, num_produto);
					num_produto = 0;
					break;
				default:
					break;
			}
			break;
		case 3:
			return 0;
		default: 
			break;
	}	
	}while(opcao != 4);
	return 0;
}
