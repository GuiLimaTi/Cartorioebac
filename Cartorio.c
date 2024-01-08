#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memoria
#include <locale.h> // biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar da string

int registro () // Função responsável por cadastrar os usuários no sistema
{
	
//inicio criação de variáveis/string
	char arquivo[40];
	char cpf[40]; // "40" é quantidade de espaços para registrar essa informação 
	char nome[40];
	char sobrenome[40];
	char cargo[40];
//Final criação de variáveis/string

	printf("Digite o CPF a ser cadastrado:"); // Coletando informação do usuário 
	scanf("%s",cpf); // %s refere-se ao salvamento de uma string

	strcpy(arquivo, cpf); // Responsável por copiar os valores da string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo,"w"); // cria o arquivo e o "w" significa escrever
	fprintf(file,cpf); // salva o valor da variável
	fclose(file); // fecha o arquivo
	
	file = fopen (arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado:");
	scanf("%s", nome);
	
	file = fopen(arquivo, "a"); // "a" atualizar
	fprintf(file, nome);
	fclose(file);

	file = fopen(arquivo, "a");
	fprintf(file, ","); // insere uma virgulo entre uma dado e outro 
	fclose(file);		
	
	printf("Digite o sobrenome a ser cadastrado:");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado:");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");
}

int consulta ()
{
	setlocale (LC_ALL, "Portuguese"); //Definindo a linguagem ( possibilita o uso de acentos nas palavras) 

//inicio criação de variáveis/string
	char cpf[40];
	char conteudo[200];
//Final criação de variáveis/string
	
	printf("Digite o CPF a ser consultado:");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf,"r"); // "r" ler o arquivo ( consultar)
	
	if(file == NULL) // condicional "se"
	{
		printf("Não foi possível abrir o arquivo, não localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file)!=NULL) // condicional "Enquanto"
	{
		printf("\nEssas são as informações do usuário:");
		printf("%s", conteudo);
		printf("\n\n");
	}
	system("pause");
}

int deletar ()
{
//inicio criação de variáveis/string

	char cpf[40];
	
//Final criação de variáveis/string
	
	printf("Digite o CPF do usuário a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf); // remoção do dado
	
	FILE *file;
	file = fopen(cpf, "r"); 
	
	if(file== NULL)
	{
		printf("O usuário não se encontra no sistema!.\n");
		system("pause");
	 } 
}

int main ()
	{
//inicio criação de variáveis/string
	int opcao=0; 
	int laco=1;
//fim criação de variáveis/string
		
	for (laco=1;laco=1;)	
	{	
		system ("cls");	
// Definindo a linguagem
			setlocale (LC_ALL, "Portuguese"); 
// Início do Menu
			printf("###Cartório do GALDA###\n\n");
			printf("Escolha a opção desejada do menu: \n\n");
			printf ("\t1- Registrar nomes\n"); // opções do menu
			printf ("\t2- Consultar nomes\n");
			printf ("\t3- Deletar nomes\n\n");
			printf ("Opção:");			
// Fim do Menu
// Armazenando a escolha do usuário
			scanf("%d",&opcao);
			system("cls"); // limpar a tela
			
// Início da seleção do menu
		switch(opcao)
			{
				case 1:
				registro(); // chamada de funções
				break;
								
				case 2:
				consulta();
				break;
								 
				case 3:
				deletar();
				break;
															
				default: 
				printf("Essa opção não está disponível\n");
				system ("pause");
				break;								
			} 
// Fim da seleção do menu
								
	}
} 
