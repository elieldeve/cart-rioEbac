#include <stdio.h> // biblioteca de comunica��o como o usu�iro 
#include <stdlib.h> // biblioteca de aloca��o de espa�o em mem�ria 
#include <locale.h> // biblioteca de aloca��o de texto por regi�o 
#include <string.h> // biblioteca responsavel por cuidar das string

int registro() // fun�o respons�vel por cadastra os usu�rios do sistema 
{
	// In�cio da Cria��o de vari�veis / string 
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	// Final da Cria��o de vari�veis / string
	
	printf("digite o cpf a ser cadastrado: "); // Coletando informa��es do Usu�rio
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); // respons�vel por criar os valores das string
	
	FILE *file; // cria o arquivo 
	file = fopen(arquivo,"w"); // cria o arquivo e o w significa escrever
	fprintf(file,cpf); // salvo o valor da vari�vel 
	fclose(file); // fecha o arquivo 
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo,"a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
    	
	system("pause");
	
		
}

int consulta()
{
	setlocale(LC_ALL, "portuguese"); //Definindo a Linguagem
	
    char cpf[40];
    char conteudo[200];
    
    printf( "digite o CPF a ser consultado: ");
    scanf("%s",cpf);
    
    FILE *file;
    file = fopen(cpf,"r");
    
    if(file == NULL)    
    {
    	printf("N�o foi poss�vel abrir o arquivo, n�o localizado!.\n");
    	system("pause");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usu�rio: ");
		printf("%s",conteudo);
		printf("\n\n");
		
		system("pause");
		
	}
}

int deletar()
{
    char cpf[40];
    
    printf("Digite o CPF a ser Deletado: ");
    scanf("%s", cpf);
    
    remove(cpf);
    FILE *file;
    file = fopen(cpf,"r");
    
    if(file == NULL);
    {
    	
    	printf("Usu�rio deletado com sucesso!.\n");
    	printf("O usu�rio n�o se encontra no sistema!.\n");
    	system("pause");
		}	
		
}
int main()
{
	int opcao=0; //Definindo as Vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
{
	system("cls"); //respons�el por limpar a tela
		
	setlocale(LC_ALL, "portuguese"); //Definindo a Linguagem
	
	printf("###cart�rio da EBAC###\n\n"); //Inicio da sele��o do Menu
	printf("escolher a op��o desejada do menu:\n\n");
	printf("\t1 - Resgistrar nomes \n");
	printf("\t2 - Consultar nomes \n");
	printf("\t3 - Deletar nomes \n\n");
	printf("\t4 - Sair do Sistema\n\n");
	
	printf("op��o: ");//Final do Menu
	
	scanf("%d", &opcao); //Armazenando a Escolha do Usu�rio 
	
	system("cls");
	
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
    
    case 4:
	printf("obrigado por ultulizar o sitema!\n");
	return 0; 
    break;
    
    default:
    	 printf("Essa op��o n�o est� dispon�vel\n");
    system("pause");
    break;
    	
    
}
    
		}
	
}

	
		
	
