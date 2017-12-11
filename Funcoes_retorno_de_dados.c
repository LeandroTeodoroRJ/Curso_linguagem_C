//************************************************************************
//						FUNÇÕES - RETORNO DE DADOS
//************************************************************************
/*
	As funções também podem retornar dados como conclusão de seu 
	processamento interno. O tipo de variável retornada é declarada
	antes do nome da função. O valor retornado é indicado depois da
	intrução return.
	Observe os exemplos abaixo:	
	
*/	
//*************************************************************************

#include <stdio.h>

int main(){
	
//	Exemplo 1:
	int sum;
	int soma(int num1, int num2){ //Retorna uma variável tipo inteiro
		int resultado;
		resultado=num1+num2;
		return resultado;	//Retorna o valor de resultado

	}
	
	sum=soma(3,4);	//O resultado da função é armazenado na variável sum
					//de mesmo tipo int
	printf("Ex.1 - A soma é: %i\n", sum);

//	Exemplo 2:
	int subtrair(int s1, int s2){
		return s1-s2;	//Retorna o valor de uma expressão

	}
	printf("Ex.2 - O valor da subtração é: %i\n", subtrair(5,3));	
//	Concatenando a função print com a função subtrair	

//	Exemplo 3:
	char letra(){
		printf("Digite uma letra: ");
		return getc(stdin); //Retornando o valor de uma função	
	}
	printf("Ex.3 - A letra digitada foi: %c\n", letra());
//	Os retorno pode ser de qualqer tipo: int, char, float.
//	O retorno também pode ser uma função, no caso do exemplo, getc.
	
	return 0;

}
