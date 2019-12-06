#include <stdio.h>
#include <stdlib.h>

void main()
{
	float base, altura, perimetro, area;
	printf("Digite a base: ");
	scanf("%f", &base);
	printf("Digite a altura: ");
	scanf("%f", &altura);
	perimetro = base * altura;
	printf("Perimetro: %f \n", perimetro);
	printf("Area: %f \n", area);
}
