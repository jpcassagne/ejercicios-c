#include <stdio.h>
#include <stdlib.h>

int main(void) {

	printf("!!!Hola Mundo!!!\n");

	int i;
	char texto[256];

	for (i = 0; i <= 15; ++i) {
		printf("El numero de iteracion es: %d\n", i);

	}
	printf("Escribi algo:");
	fgets(texto,256,stdin);
	printf("El texto ingresado es: %s",texto);

	return EXIT_SUCCESS;
}
