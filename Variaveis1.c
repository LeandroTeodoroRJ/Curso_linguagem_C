//************************************************************************
//							Variáveis 1
//************************************************************************
//
//	Variáveis são posições de memória destinadas a armazenar um tipo
//	de informação. Esses tipos podem ser numéricos (int, float, double) ou
//	caracteres (char). O tipo int só pode armazenar números inteiros
//	{...,-2,-1,0,1,2,...}, já o tipo float pode armazenar os números
//	do conjunto numérico Real. O tipo char e utilizado para armazenar
//	1 caractere alfa numérico. Uma string é um conjunto finito de 
//	posições de memória do tipo char utilizado para armazenar um 
//	conjunto de caracteres.
//
//*************************************************************************

/*
Caracteres válidos para se dar nome às variáveis
Para se dar nome à variável, também conhecido como identificador da variável, 
é preciso seguir três regras:
1-Letras maiúsculas e minúsculas, dígitos de 0 a 9 e o caracter underscore poderão ser usados;
2-O primeiro caracter NÃO pode ser dígito;
3-Nenhuma palavra reservada deverá ser usada para nome de variável.

Modificadores de Tipos
Os modificadores servem para alterar as características de alguns tipos, 
possibilitando armazenamento só de números positivos e aumentando, 
ou diminuindo, a capacidade de armazenamento. Temos 4 modificadores:

signed		Armazena positivos e negativos.
unsigned	Armazena só positivos, dobrando a capacidade de armazenamento.
short		Armazena inteiros / 2 bytes
long		Armazena inteiros / 4 bytes
*signed e unsigned pode ser utilizado em conjunto com os modificadores
	short e long
*Os modificadores de tipo não são usados com float.

Conversão de Tipos - Cast
Para fazer um cast o tipo da variável para qual será convertida deve ser
indicada antes da operação:
int num1;
int num2;
float resultado;
resultado = (float) num1/num2;

*/

#include <stdio.h>

int main(){

	int num;		//Declaração de uma variável inteira
	int var1,var2;	//Declara duas variáveis como tipo inteira
	float dec;		//Declaração de uma variável ponto flutuante (real)
	float rel1,rel2;
	char caractere; //Declaração de uma variável tipo char, é utilizada
					//para armazenar 1 caractere
	char str[10]="Curso de C";	//String com 10 posições de memória e
								//inicializa com o a string: Curso de C
								//Note as aspas duplas para string

//	O sinal de = representa atribuição, ou seja, o valor da direita é
//	alocado na variável da esquerda.
	num=5;				//Inicializa uma variável numérica com valor 5
	var1=0;
	var2=-3;			//Inicializando com número negativo
	dec=0.2;			//Inicializa com o valor de 0.2
	rel1=1e-3;			//Inicializa com o valor de 0.001
	rel2=num;			//A variável float também pode receber números
						//inteiros, aqui inicializa com o valor da 
						//variável num.			
	caractere='C';		//Inicializa com o caractere C, note as 
						//aspas simples para denotar 1 caractere

	putchar(caractere); //Imprime 1 caractere na tela   
	printf("\n");		//Quebra de linha
	puts(str);  		//Imprime uma string
	return 0;

}
