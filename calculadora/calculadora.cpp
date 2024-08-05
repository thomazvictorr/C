#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (int argc, char *argv[]){  // evoluindo em switch case, projeto simples de uma calculadora em C

	setlocale (LC_ALL, "Portuguese");
	int opcao;
	float num1, num2, total;
	
	printf("#### CALCULADORA ####\n\n");
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &num1);
	printf("Digite o segundo n�mero: ");
	scanf("%f", &num2);
	system ("cls");
	
	printf("#### CALCULADORA ####\n\n");
	printf("Escolha o tipo de Opera��o Matem�tica:\n");
	printf("1: Adi��o\n");
	printf("2: Subtra��o\n");
	printf("3: Multiplica��o\n");
	printf("4: Divis�o\n");
	scanf("%d", &opcao);
	system("cls");

	switch(opcao){
		case 1:
			printf("#### CALCULADORA ####\n\n");
			printf("O resultado da Soma corresponde �\n");
			total = (num1 + num2);
			printf("Resultado: %.f\n\n", total);
		break;
			
		case 2:
			printf("#### CALCULADORA ####\n\n");
			printf("O resultado da Subtra��o corresponde �\n");
			total = (num1 - num2);
			printf("Resultado: %.f\n\n", total);
		break;
			
		case 3:
			printf("#### CALCULADORA ####\n\n");
			printf("O resultado da Multiplica��o corresponde �\n");
			total = (num1*num2);
			printf("Resultado: %.f\n\n", total);
		break;
			
		case 4:
			if (num2 != 0) {
            printf("#### CALCULADORA ####\n\n");
            printf("O resultado da Divis�o corresponde �\n");
            total = (num1/num2);
			printf("Resultado: %.f\n\n", total); 
		 } else {
         	printf("#### CALCULADORA ####\n\n");
            printf("Divis�o por zero n�o � permitida.\n\n");
         }
		break;

		default:
		printf("#### CALCULADORA ####\n\n");
		printf("Essa op��o n�o est� dispon�vel!\n\n"); // fim da sele��o
		system("pause");
		break;
}
	system("pause");
	return 0;
}
