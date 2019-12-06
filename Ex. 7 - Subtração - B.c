#include <stdio.h>
#include <stdlib.h>

void main()
{
	int n, n2, subtracao;
	printf("Digite o primeiro algarismo: ");
	scanf("%d", &n);
	printf("Digite o segundo algarismo: ");
	scanf("%d", &n2);
	subtracao = n - n2;
	printf("Resultado: %d", subtracao);
}
