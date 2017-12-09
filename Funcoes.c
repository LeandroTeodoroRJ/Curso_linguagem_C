//************************************************************************
//								FUNÇÕES
//************************************************************************
/*
	Funções são segmentos de códigos organizados para realizar uma
	determinada tarefa. As funções podem receber dados e passar um
	resultado.
	Uma função tem a sintaxe abaixo:
	<tipo> <nome da função>(<parâmetros>){
		bloco de
		comandos
	}
	Onde:
	<tipo>: São os tipos de variáveis para retorno de uma função
			(que são os tipos já apresentados), ou a palavra 
			reservada void para não retornar um valor

	<parâmetros>:	Variáveis para argumentos de entrada
	
*/	
//*************************************************************************

#include <stdio.h>

int main(){
	
	void imprime_mensagem(){ 		//Declaração de uma função
		printf("Curso de C.\n");
		printf("Função executada com sucesso.\n");	//Bloco de instruções da função
	}

	imprime_mensagem();				//Chamada da função
	
	return 0;

}

/*
OBS:	
	1.Para uma função ser chamada, ela obrigatóriamante deve ser declarada
	antes. 
	2. A palavra void indica que a função não retornará nunhum valor

*/