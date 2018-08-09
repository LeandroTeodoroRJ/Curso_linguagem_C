//********************************************************************
//							ESTRUTURAS
//********************************************************************
/*
	Estrutura é um conjunto de variáveis, não necessariamente do mesmo
tipo, agrupadas em um mesmo nome(variável da estrutura). A estrutura 
é declarada após a palavra reservada struct. A variável de estrutura 
pode ser declarada em linha subsequente.
*/

#include <stdio.h>	
#include <string.h>	

int main(){	
	char texto[10];
				  
	struct Pessoa			//Declaração da estrutura
	{
		char sobrenome[10];
		int idade;
	}; 

	int altera_idade(int valor){
		return valor;
	}

	struct Pessoa maria;	//Declaração da variável de estrutura

	strcpy(texto,"Silva");	//Copia a string para dentro do vetor texto
	strcpy(maria.sobrenome,texto); //Inicialização de uma string dentro da estrutura

	maria.idade = 30;	//Inicialização de um elemento não vetorado da estrutura 

	printf("Maria %s \n",maria.sobrenome);
	printf("Idade: %i \n",maria.idade);

	maria.idade = altera_idade(27); 	//Elemento da estrutura recebendo valor da função	
	printf("Idade atualizada: %i \n",maria.idade);

	return 0;				  
}