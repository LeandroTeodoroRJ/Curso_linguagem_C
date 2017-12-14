//************************************************************************
//								PONTEIROS
//************************************************************************
/*
	Toda variável é alocada na memória RAM em um determinado endereço.
	Um ponteiro é um tipo especial de variável que aponta para esse
	endereço. A partir do ponteiro uma localidade de memória pode 
	ser acessada de forma indireta.
	Observe os exemplos:
*/
//*************************************************************************


#include <stdio.h>	
					

int main(){			
	int var = 3;	//Declara uma variável inteira 
	printf("O valor de var é: %i\n", var);
	printf("O endereço de var na memória é: %p\n", &var); //Note o %p para
	//formatação de localidade de memória e &var que retorna a localidade 
	//de memória.

	int *p;		//Declaração de um ponteiro, deverá ser do mesmo tipo da
				//variável apontada
	p=&var;		//O ponteiro p aponta para variável var
	printf("O endereço apontado por p na memória é: %p\n", p);
	printf("O valor de p é: %i\n", *p);  //Lendo var de forma indireta

	*p=7;	//Alterando var de forma indireta
	printf("O novo valor de var é: %i\n", var);

	return 0;		
}