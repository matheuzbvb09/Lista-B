#include <stdio.h>
#include <stdlib.h>

void main()
{
		char nome[100], telefone[100], endereco[100];
		printf("Digite seu nome: ");
	scanf("%s", &nome);
	printf("Digite o seu telefone: ");
	scanf("%s", &telefone);
	printf("Digite o seu endereco: ");
	scanf("%s", &endereco);
	printf("\nDados - Nome:%s, Telefone: %s, Endereco: %s",nome , telefone, endereco);
}
