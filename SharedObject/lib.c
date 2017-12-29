//************************************************************************
//			    			ARQUIVO SHARED OBJECT
//************************************************************************
/*
	Para compilar o shared object no Linux:
	$ gcc -c lib.c				#Compila o shared object
	$ mkdir libs
	$ cp lib.o libs				#Copia o arquivo compilado para a pasta libs
	$ cd libs
	$ ar rcs libmylib.a lib.o		#Cria o link estático (static library)
									#de nome libmylib.a dentro da pasta libs
	
*/
//*************************************************************************

#include <stdio.h>		

void func(){
	printf("Função externa.\n");
}
	
int soma(int a, int b){
	int resultado;
	resultado = a+b;
	return resultado;					
}

int sub(int a, int b){
	int resultado;				
	resultado = a-b;
	return resultado;					
}
