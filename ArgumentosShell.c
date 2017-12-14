//************************************************************************
//		ENTRANDO COM ARGUMENTOS DIRETAMENTE NA LINHA DE COMANDO
//************************************************************************
/*
	Com o código abaixo é possível passar argumentos diretamente
	pela linha de comando. 
	Exemplo:
	$./ArgumentosShell Arg1 Arg2
*/
//*************************************************************************
	
#include <stdio.h>
#include <stdlib.h>
		

int main(int argc, char *argv[]){ 
	int i;

	printf("Número de argumentos digitados:");    	
	printf("%i\n", argc);  //Conta +1, pois conta o próprio comando do programa

	printf("Retorna o nome do programa:\n");    	
	printf("%s\n", argv[0]); //Índice 0 é o próprio comando do programa

	printf("Retorna o primeiro argumento:\n");    	
	printf("%s\n", argv[1]); //Imprime o primeiro argumento armazenado em
							 //forma de string

	printf("Imprimindo todos os argumentos:\n");
	for(i=1;i<argc;i++){
		printf("%s\n",argv[i]);
	}

	return 0;				  
}