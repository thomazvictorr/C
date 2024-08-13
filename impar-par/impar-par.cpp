#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// identificando número par ou ímpar
int main (int argc, char *argv[]){

	setlocale (LC_ALL, "Portuguese");
	int number;
	
	printf("#### ÍMPAR OU PAR ####\n\n");
	printf("Digite o número para verificarmos se ele é ímpar ou par!\n");
	printf("Você digitou o número: ");
	scanf("%d", &number);
	system("cls");
	
	if (number % 2 == 0) {
		printf("#### ÍMPAR OU PAR ####\n\n");
		printf("Número: %.d\n", number);
		printf("O número que você digitou é PAR!\n\n");
	}
	
	else {
		printf("#### ÍMPAR OU PAR ####\n\n");
		printf("Número: %.d\n", number);
		printf("O número que você digitou é ÍMPAR!!\n\n");
	}
	
	system("pause");
	return 0;
}
