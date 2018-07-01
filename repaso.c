#include <stdio.h>

float celsiusToFaren(float celsius) {
	return (celsius * 1.8 + 32);
}

int main(int argc, char const *argv[])
{
	// int n1, n2;
	float celsius;
	// printf("Digite los numeros: \n");
	// scanf("%i %i",&n1, &n2);
	printf("Grados Celsius: \n");
	scanf("%f",&celsius);
	printf("%.2f\n", celsiusToFaren(celsius));

	return 0;
}

int calculadora(int n1, int n2) {
	int suma, resta, division, multiplicacion;
	suma = n1 + n2;
	resta = n1 - n2;
	division = n1 / n2;
	multiplicacion = n1 * n2;

	printf("La suma es: %i\n", suma);
	printf("La suma es: %i\n", resta);
	printf("La suma es: %i\n", multiplicacion);
	printf("La suma es: %i\n", division);
}