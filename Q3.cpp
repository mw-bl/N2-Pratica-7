#include <stdio.h>

int main() {
	char frase[500], fraseInvertida[500];
	int i, j, tamanho = 0;

	printf("Digite uma frase: ");
	fgets(frase, 500, stdin);

	for (i = 0; frase[i] != '\0'; i++) {
	tamanho++;
	}

	for (i = tamanho - 1, j = 0; i >= 0; i--, j++) {
	fraseInvertida[j] = frase[i];
	}

	fraseInvertida[j] = '\0';

	printf("\nFrase invertida: %s", fraseInvertida);

	return 0;
}
