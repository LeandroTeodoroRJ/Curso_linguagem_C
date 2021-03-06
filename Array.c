//************************************************************************
//								ARRAY
//************************************************************************
/*
	Um array é também conhecido como matriz. É um conjunto de espaços
	de memória reservados a alocação de dados de um mesmo tipo. Um array
	também pode ser entendido como pelo conceito de conjunto, onde são
	agrupados elementos de um mesmo tipo, ex: N={1, 2, 3} ou L={a, b, c}
	esses vindos da matemática.

	Declaração de um Array:
	<tipo do array> nome [<tamanho>]...[];
*/
//*************************************************************************
	
#include <stdio.h>
		

int main(){ 
	int var[3]; //Declara um array de 1 dimensão de tamanho 3
//Obs: A primeira posição sempre começa com o índice 0
	var[0]=5;	//A primeira posição, índice 0, recebe o valor 5
	var[1]=6;	//A segunda posição, índice 1, recebe o valor 6
	var[2]=7;
	printf("Valor do array índice 0: %i\n", var[0]);
	printf("Valor do array índice 1: %i\n", var[1]);
	printf("Valor do array índice 2: %i\n", var[2]);

//	Saber o tamanho ocupado por um Array
	int espacos_memoria_int = 4;	//Uma variável inteira ocupa 4 espaços
	int elementos= sizeof(var)/espacos_memoria_int;
	printf("Tamanho do Array: %i\n", elementos);


	float matriz[2][3];	//Declara um array de duas dimensões, 2 linhas x 3 colunas 
	matriz[0][0]=6;		//Tanto a primeira linha, quanto a primeira coluna
						//começam com 0
	matriz[1][2]=7.89;
	matriz[1][0]=4e-2;
	printf("Sendo o elemento a(n,m) onde: n:linha e m:coluna.\n");
	printf("Valor do elemento a(0,0): %f\n", matriz[0][0]);
	printf("Valor do elemento a(1,2): %f\n", matriz[1][2]);
	printf("Valor do elemento a(2,0): %f\n", matriz[2][0]);

	char ctr[11];	//Array de elementos tipo char
	ctr[0]='C';
	ctr[1]='u';
	ctr[2]='r';
	ctr[3]='s';
	ctr[4]='o';
	ctr[5]=' ';
	ctr[6]='d';
	ctr[7]='e';
	ctr[8]=' ';
	ctr[9]='C';
	ctr[10]='.';
	int i;
	for(i=0;i<=10;i++){
		printf("%c",ctr[i]);
	}
	printf("\n");

//	Uma string é um array do tipo char, observe o exemplo abaixo:
	char str[14]="Dennis Ritchie"; 
	printf("%s\n",str);			//Opção s para string
	printf("Imprime o elemento 4 da string: %c\n", str[4]);
//	OBS: Caso ocorra erro na apresentação dos dados da string
//	será necessário declarar no tamanhodo array mais 1 posição para o 
//	caracter de termanição, 14+1 = 15

// 	Um array tembém é um ponteiro que aponta para a primeira posição de memória
//	que ele será alocado, essa posição é chamada de Endereço Base.
	printf("%p\n", var);
	printf("%p\n", &var[0]);

	return 0;
}
