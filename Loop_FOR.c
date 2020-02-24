//************************************************************************
//							Loop com FOR
//************************************************************************
/*
	Loops são estruturas que executam um bloco de instruções até que 
	uma condição se torne falsa. Os loops também são chamados de estru-
	turas de repetição, laços condicionais ou comandos de iteração. 
	A primeira estrutura apresentada é o laço com a instrução for,
	cuja a sintaxe está apresentada abaixo:
		
	for (valor inicial ; expressão de teste ; incremento){
		bloco de
		comandos
	}
*/	
//*************************************************************************

#include <stdio.h>

int main(){
	
//	Observe os exemplos:

//	Neste exemplo, a variável inteira x é inicaizada com o valor 0,
//	o loop será repetido enquanto a condição for atendida, x<=5.
//	A variável x será incrementada uma vez a cada loop.
//	O incremento é realizado ao final da última linha de instrução
//	do bloco.
	int x;	
	for (x=0;x<=5;x++){   
		printf("O valor de x é: %i\n",x);
	}

//	A indicação de inicialização e(ou) a indicação de incremento podem
//	estar fora da instrução for. 
//	O incremento não necessariamente precisa ser em forma de adição a++,
//	podendo ser conveniente a utilização de outras expressões matemáticas.
	int a=3;	//Inicialização da variável
	for (;a<25;){
		printf("O valor de a é:%i\n",a);
		a*=2;  	//Incremento fora da linha do for
	}	

//	Outro exemplo:
	for (a=100;a>20;a=(a/2)+x){
		printf("O valor de a é:%i\n",a);
	}	
	
	return 0;

}



