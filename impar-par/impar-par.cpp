#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// identificando n�mero par ou �mpar
int main (int argc, char *argv[]){

	setlocale (LC_ALL, "Portuguese");
	int number;
	
	printf("#### �MPAR OU PAR ####\n\n");
	printf("Digite o n�mero para verificarmos se ele � �mpar ou par!\n");
	printf("Voc� digitou o n�mero: ");
	scanf("%d", &number);
	system("cls");
	
	if (number % 2 == 0) {
		printf("#### �MPAR OU PAR ####\n\n");
		printf("N�mero: %.d\n", number);
		printf("O n�mero que voc� digitou � PAR!\n\n");
	}
	
	else {
		printf("#### �MPAR OU PAR ####\n\n");
		printf("N�mero: %.d\n", number);
		printf("O n�mero que voc� digitou � �MPAR!!\n\n");
	}
	
	system("pause");
	return 0;
}
