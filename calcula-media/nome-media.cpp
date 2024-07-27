#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char *argv[])
{
	setlocale (LC_ALL, "Portuguese");
	char nome;
	float nota1,nota2,media;
	
	printf(" #### PORTAL DO ALUNO ####\n\n");
	
	printf("Digite o nome do aluno(a): ");
	scanf("%s", &nome);
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2); 
	
	system("cls");
	
	printf(" #### PORTAL DO ALUNO ####\n\n");
	
	media = (nota1+nota2)/2; // cálculo da nota dividido por 2 = média 
	printf("Nota média do semestre:%2.f\n",media); // média
	
	if (media<=5){
		printf("Aluno(a) Reprovado\n\n");	
	}
	
	else{
		printf("Aluno(a) Aprovado\n\n");		
	}

	system("pause");
	return 0;
}
