#include <stdio.h> // biblioteca de comunicação como o usuáiro 
#include <stdlib.h> // biblioteca de alocação de espaço em memória 
#include <locale.h> // biblioteca de alocação de texto por região 
#include <string.h> // biblioteca responsavel por cuidar das string

int registro() // funão responsável por cadastra os usuários do sistema 
{
	// Início da Criação de variáveis / string 
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	// Final da Criação de variáveis / string
	
	printf("digite o cpf a ser cadastrado: "); // Coletando informações do Usuário
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); // responsável por criar os valores das string
	
	FILE *file; // cria o arquivo 
	file = fopen(arquivo,"w"); // cria o arquivo e o w significa escrever
	fprintf(file,cpf); // salvo o valor da variável 
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
    	printf("Não foi possível abrir o arquivo, não localizado!.\n");
    	system("pause");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações do usuário: ");
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
    	
    	printf("Usuário deletado com sucesso!.\n");
    	printf("O usuário não se encontra no sistema!.\n");
    	system("pause");
		}	
		
}
int main()
{
	int opcao=0; //Definindo as Variáveis
	int laco=1;
	
	for(laco=1;laco=1;)
{
	system("cls"); //responsáel por limpar a tela
		
	setlocale(LC_ALL, "portuguese"); //Definindo a Linguagem
	
	printf("###cartório da EBAC###\n\n"); //Inicio da seleção do Menu
	printf("escolher a opção desejada do menu:\n\n");
	printf("\t1 - Resgistrar nomes \n");
	printf("\t2 - Consultar nomes \n");
	printf("\t3 - Deletar nomes \n\n");
	printf("\t4 - Sair do Sistema\n\n");
	
	printf("opção: ");//Final do Menu
	
	scanf("%d", &opcao); //Armazenando a Escolha do Usuário 
	
	system("cls");
	
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
    
    case 4:
	printf("obrigado por ultulizar o sitema!\n");
	return 0; 
    break;
    
    default:
    	 printf("Essa opção não está disponível\n");
    system("pause");
    break;
    	
    
}
    
		}
	
}

	
		
	
