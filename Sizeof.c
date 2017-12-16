//************************************************************************
//								FUNÇÃO SIZEOF
//************************************************************************
/*
	A função sizeof retorna o tamanho de um determinado espaço de memória
	utilizado para alocação de dados.
	Observe os exemplos abaixo:
*/
//*************************************************************************
	
#include <stdio.h>

int main(){ 
	char ctr='A';
	printf("%i\n", sizeof(ctr));
	char str[]="Dennis Ritchie"; 
	printf("%i\n", sizeof(str));

	int num1=0;
	printf("%i\n", sizeof(num1));	
	int num2[]={1,2,3,4,5,6,7,8,9,10};
	printf("%i\n", sizeof(num2));

	float rel=0;
	printf("%i\n", sizeof(rel));	
	float rel2[]={2.14,3.86,67.978,4e-54,36};
	printf("%i\n", sizeof(rel2));	

	return 0;				  
}