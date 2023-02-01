#include <stdio.h>

int main() {
	
	char frase[500], c;
	int i, cont = 0;

	printf("Digite uma frase: ");
	fgets(frase, 500, stdin);

	printf("\nDigite o caractere: ");
	scanf("%c", &c);

	for (i = 0; frase[i] != '\0'; i++) {
		if (frase[i] == c) {
		cont++;
		}
	}

	printf("\nO caractere '%c' aparece %d vezes na frase\n", c, cont);
	return 0;
}
