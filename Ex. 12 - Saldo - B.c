#include <stdio.h>
#include <stdlib.h>

void main()
{
	float saldo, novoSaldo;
	printf("Digite o saldo: ");
	scanf("%f", &saldo);
	novoSaldo = saldo + saldo * 0.02;
	printf("Saldo com reajuste: %f", novoSaldo);
}
