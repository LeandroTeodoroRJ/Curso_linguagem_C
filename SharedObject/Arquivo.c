//************************************************************************
//							Criar uma DLL no C
//************************************************************************
/*
	No Linux um shared objects é arquivo em separado do programa principal, 
	contém códigos compilados que são necessários ao funcionamento da 
	aplicação. É equivalente a um arquivo dll no windows.
	Neste tópico linkaremos o programa principal ao arquivo shared object
	por uma conexão estática. 
	Compilando e criando o link 
	$gcc Arquivo.c -Llibs -lmylib -o outfile
	
	Obs: -L[diretório do shared object]
		 -l[nome do arquivo do link estático sem o prefixo 'lib' e a extensão '.a']
		 -o outfile [nome do executável]
	
*/
//*************************************************************************

#include <stdio.h>	
						
int main(){	
	extern void func();				//Declaração das funções externas
	extern int soma(int a, int b);
	extern int sub(int a, int b);
			
	func();			 
	printf("A soma é: %i\n", soma(2,3));
	printf("O valor da subtração é: %i\n", sub(5,3));

}