//************************************************************************
//								FUNÇÕES
//************************************************************************
/*
	Funções são segmentos de códigos organizados para realizar uma
	determinada tarefa. As funções podem receber dados e passar um
	resultado.
	Uma função tem a sintaxe abaixo:
	<tipo> <nome da função>(parâmetros){
		bloco de
		comandos
	}
	Onde:
	<tipo>: São os tipos de variáveis para retorno de uma função
			(que são os tipos já apresentados), ou a palavra 
			reservada void para não retornar um valor

	parâmetros:	Variáveis para argumentos de entrada
	
OBS:	
	1.Para uma função ser chamada, ela obrigatóriamante deve ser declarada
	antes do seu uso. Caso seja, por exemplo, declarada após a função main
	deverá ser declarado o protótipo da função. Quanto maior o número de 
	funções no programa, maior o risco do erro de função não declarada.
	Assim, a partir de um certo ponto faz-se necessário o uso de protótipos.
 
	2. A palavra void indica que a função não retornará nunhum valor, ou se
	declarada dentro dos parênteses, indica que não possui nenhum parâmetro
	de entrada.

*/	
//*************************************************************************

#include <stdio.h>

int soma(int a, int b);		//Protótipo da função soma

void imprime_mensagem(){ 		//Declaração de uma função
	printf("Curso de C.\n");
	printf("Função executada com sucesso.\n");	//Bloco de instruções da função
}

int main(){
	imprime_mensagem();				//Chamada da função
	printf("Imprime a soma de 4+7: %i\n", soma(4,7));
	return 0;
}

int soma(int a, int b){
	return a+b;
}
