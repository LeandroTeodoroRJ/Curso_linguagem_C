//************************************************************************
//						PARÂMETROS NAS FUNÇÕES
//************************************************************************
/*
	As funções também podem receber dados pelos seus parâmetros, para
	serem manipulados pela função. Os dados são passados na forma de
	argumentos. Na passagem por valor, uma cópia do valor, ou valores, 
	é passada para os parâmetros da função chamada.
	Observe os exemplos abaixo:
	
*/	
//*************************************************************************

#include <stdio.h>

int main(){
	
//	Exemplo 1:
	void soma(int num1, int num2){ //Declaração de função com parâmetros
		int resultado;
		resultado=num1+num2;
		printf("Ex.1 - A soma é: %i\n", resultado);
	}

	soma(4,3);
//	Note que as variáveis num1 e num2 são os parâmetros da função soma. Os
//	valores recebidos, os inteiros 4 e 3, são os argumentos.

//	Exemplo 2:
	void subtrair(int s1, int s2){
		int resultado;
		resultado=s1-s2;
		printf("Ex.2 - O valor da subtração é: %i\n", resultado);
	}
	
	subtrair(5,3);	
//	O primeiro argumento passado será recebido pelo primeiro parâmetro e 
//	o segundo argumento será recebido pelo segundo parâmetro. A ordem 
//	dos argumentos é importante.

//	Exemplo 3:
	void letra(char ctr){
		printf("Ex.3 - A letra digitada foi: %c\n", ctr);
	}
	
	printf("Digite uma letra: ");
	letra(getc(stdin));	
//	Os parâmetros podem ser de qualqer tipo: int, char, float.
//	O argumento pode ser uma função, no caso do exemplo getc.
	
	return 0;

}

