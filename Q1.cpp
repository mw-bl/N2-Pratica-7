#include <stdio.h>

int main() {
	char frase[500];
	int i, cont = 0;

	printf("Digite uma frase: ");
	fgets(frase, 500, stdin);

	for (i = 0; frase[i] != '\0'; i++) {
		if (frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'A' || frase[i] == 'E' || frase[i] == 'I' || frase[i] == 'O' || frase[i] == 'U') {
		cont++;
		}
	}

	printf("A frase tem %d vogais\n", cont);
	return 0;
}
