//************************************************************************
//								FUNÇÃO SIZEOF
//************************************************************************
/*
	A função sizeof retorna o tamanho de um determinado espaço de memória
	utilizado para alocação de dados.
	Observe os exemplos abaixo:

	Para saber o tamanho do array é necessário dividir o espaço total
	de memória retornado pela função sizeof pelo espaço de memória 
	ocupado por cada tipo de variável, da seguinte forma:
	Tipo	Divisor
	int		4
	char	1
	float	4
*/
//*************************************************************************
	
#include <stdio.h>

int main(){ 
	char ctr='A';
	printf("%i\n", sizeof(ctr));	//Espaço ocupado por uma variável tipo char
	char str[]="Dennis Ritchie";
	printf("%i\n", sizeof(str));	//Espaço ocupado pelo array
	printf("\n");

	int num1=0;
	printf("%i\n", sizeof(num1));	
	int num2[]={1,2,3,4,5,6,7,8,9,10};
	printf("%i\n", sizeof(num2));
	printf("\n");

	float rel=1.3e-4;
	printf("%i\n", sizeof(rel));	
	float rel2[]={2.14,3.86,67.978,4e-54,36};
	printf("%i\n", sizeof(rel2));	
	printf("\n");

	return 0;				  
}
