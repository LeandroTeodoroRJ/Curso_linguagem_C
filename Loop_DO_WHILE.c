//************************************************************************
//							Loop com DO WHILE
//************************************************************************
/*
	O loop com do while tem a mesma função do loop com while, porém executa
	primeiro o bloco de comandos e só depois testa a condição.
	
	do{
		bloco de
		comandos
	}while (<condição>);
*/	
//*************************************************************************

#include <stdio.h>

int main(){
	
//	Observe o exemplo:
	int x=0;		//Inicialização	
	do{	
		printf("O valor de x é: %i\n",x);
		x++;		
	}while (x<=2);  //Condição testada somente no final do loop

	return 0;

}



