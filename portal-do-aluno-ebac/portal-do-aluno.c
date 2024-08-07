#include <stdio.h> // biblioteca de comunicação de usuário
#include <stdlib.h> // biblioteca de alocação de espaço de memória
#include <locale.h> // biblioteca de alocações de texto por região
#include <string.h> // biblioteca responsável por cuidar das string

 // ferramenta de consulta, registro e exclusão de alunos em uma plataforma estudantil
int registro (){
	setlocale (LC_ALL, "Portuguese");
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char curso [40];
	
	printf("####-------------------------####\n");
	printf("\tPORTAL DO ALUNO\n\n");
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo, cpf); // copia os valores das string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); // cria o arquivo
	fprintf(file,cpf); // salvo o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s", nome);
	
	file = fopen (arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);

	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o curso escolhido: ");
	scanf("%s", curso);
	
	file = fopen (arquivo, "a");
	fprintf(file,curso);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fclose(file);
	
	printf("Usuário cadastrado com sucesso!\n\n\n");
	system("pause"); // fim do registro
}


int consulta(){
	setlocale (LC_ALL, "Portuguese");
	char cpf[40];
	char conteudo [200];
	char *token;
	
	printf("####-------------------------####\n");
	printf("\tPORTAL DO ALUNO\n\n");
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);

	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == 	NULL){
		printf("####-------------------------####\n");
		printf("\tPORTAL DO ALUNO\n\n");
		printf("CPF não localizado... Tente novamente!\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{ // caso o usuário esteja no sistema
		printf("####-------------------------####\n");
		printf("\tPORTAL DO ALUNO\n\n");
		printf("\nEssas são as informações do usuário: \n");
		
		token = strtok(conteudo, ",");
		printf("CPF: %s\n", token);	
		
		token = strtok(NULL, ",");
		printf("Nome: %s\n", token);	
		
		token = strtok(NULL, ",");
		printf("Sobrenome: %s\n", token);	
		
		token = strtok(NULL, ",");
		printf("Curso: %s\n\n", token);
			
	system("pause");
	}
}


int deletar(){
	setlocale (LC_ALL, "Portuguese");
	char cpf[40];
	printf("####-------------------------####\n");
	printf("\tPORTAL DO ALUNO\n\n");
	printf("Digite o CPF do aluno a ser deletado: ");
	scanf("%s",cpf);
		
	FILE *file;
	file = fopen(cpf,"r"); //"R" lê o arquivo e espelha em tela
	fclose(file); //fclose fecha o arquivo
	
	if(file == NULL) // caso o usuário não esteja cadastrado em sistema
	{
		printf("O usuário não se encontra no sistema!\n\n");	
		system("pause");
	}
	remove(cpf);
	if(file != NULL) // caso o usuário seja deletado do sistema
	{
		printf("O usuário foi deletado com suceso!\n\n");
		system("pause"); // fim do delete		
	}
}


int main(){
	int opcao=0; // definindo variáveis
	int x=1;
	
	for(x=1;x=1;){ //x = laço de repetição
	
		setlocale (LC_ALL, "Portuguese"); // definindo linguagem
	
		printf("####-------------------------####\n"); // inicio do menu
		printf("\tPORTAL DO ALUNO\n\n");
		printf("Escolha a opção desejada do menu:\n");
		printf("\t1: Registar nomes\n");
		printf("\t2: Consultar nomes\n");	
		printf("\t3: Deletar nomes\n"); 
		printf("\t4: Sair do sistema\n\n");
		printf("Opção desejada: "); // fim do menu
	
		scanf("%d", &opcao); // armazenando a escolha do usuário
	
		system("cls");
	
		switch(opcao){
			case 1: 
			registro();
			break;
			
			case 2:
			consulta();
			break;
			
			case 3:
			deletar ();
			break;
			
			case 4:
			printf("####-------------------------####\n"); // inicio do menu
			printf("\tPORTAL DO ALUNO\n\n");
			printf("Obrigado por utilizar o sistema!\n");
			return 0;
			break;	
			
			default:
			printf("####-------------------------####\n"); // inicio do menu
			printf("\tPORTAL DO ALUNO\n\n");
			printf("Essa opção não está disponível!\n\n"); // fim da seleção
			system("pause");
			break;			
		}			
		}	
}


