#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em memoria
#include <locale.h> // biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar da string

int registro () // Fun��o respons�vel por cadastrar os usu�rios no sistema
{
	
//inicio cria��o de vari�veis/string
	char arquivo[40];
	char cpf[40]; // "40" � quantidade de espa�os para registrar essa informa��o 
	char nome[40];
	char sobrenome[40];
	char cargo[40];
//Final cria��o de vari�veis/string

	printf("Digite o CPF a ser cadastrado:"); // Coletando informa��o do usu�rio 
	scanf("%s",cpf); // %s refere-se ao salvamento de uma string

	strcpy(arquivo, cpf); // Respons�vel por copiar os valores da string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo,"w"); // cria o arquivo e o "w" significa escrever
	fprintf(file,cpf); // salva o valor da vari�vel
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

//inicio cria��o de vari�veis/string
	char cpf[40];
	char conteudo[200];
//Final cria��o de vari�veis/string
	
	printf("Digite o CPF a ser consultado:");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf,"r"); // "r" ler o arquivo ( consultar)
	
	if(file == NULL) // condicional "se"
	{
		printf("N�o foi poss�vel abrir o arquivo, n�o localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file)!=NULL) // condicional "Enquanto"
	{
		printf("\nEssas s�o as informa��es do usu�rio:");
		printf("%s", conteudo);
		printf("\n\n");
	}
	system("pause");
}

int deletar ()
{
//inicio cria��o de vari�veis/string

	char cpf[40];
	
//Final cria��o de vari�veis/string
	
	printf("Digite o CPF do usu�rio a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf); // remo��o do dado
	
	FILE *file;
	file = fopen(cpf, "r"); 
	
	if(file== NULL)
	{
		printf("O usu�rio n�o se encontra no sistema!.\n");
		system("pause");
	 } 
}

int main ()
	{
//inicio cria��o de vari�veis/string
	int opcao=0; 
	int laco=1;
//fim cria��o de vari�veis/string
		
	for (laco=1;laco=1;)	
	{	
		system ("cls");	
// Definindo a linguagem
			setlocale (LC_ALL, "Portuguese"); 
// In�cio do Menu
			printf("###Cart�rio do GALDA###\n\n");
			printf("Escolha a op��o desejada do menu: \n\n");
			printf ("\t1- Registrar nomes\n"); // op��es do menu
			printf ("\t2- Consultar nomes\n");
			printf ("\t3- Deletar nomes\n\n");
			printf ("Op��o:");			
// Fim do Menu
// Armazenando a escolha do usu�rio
			scanf("%d",&opcao);
			system("cls"); // limpar a tela
			
// In�cio da sele��o do menu
		switch(opcao)
			{
				case 1:
				registro(); // chamada de fun��es
				break;
								
				case 2:
				consulta();
				break;
								 
				case 3:
				deletar();
				break;
															
				default: 
				printf("Essa op��o n�o est� dispon�vel\n");
				system ("pause");
				break;								
			} 
// Fim da sele��o do menu
								
	}
} 
