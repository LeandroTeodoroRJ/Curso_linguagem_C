//************************************************************************
//					ARRAY COMO PARÂMETROS DE FUNÇÕES
//************************************************************************
/*
	Um array pode ser passado como argumento de uma função, conforme
	o exemplo abaixo:
*/
//*************************************************************************

#include <stdio.h>

float media(float num[],int total){ 	//Tira a média dos números.
										//total recebe o tamanho do array
										//num[] recebe o ponteiro do array
	float md;
	int i;			//Iterador que percorrerá o array local
	float soma=0;
	for (i=0;i<total;i++){
		soma=soma+num[i];
	}
	md=soma/total;
	return md;
}

int main(){
//	Exemplo 1:
	float var[]={4,5,7,9};
	int elementos=(sizeof(var)/4);	//Número total de elementos(tamanho do array)

	printf("A média é: %.2f\n",media(var,elementos));
	//Passa como argumento o ponteiro do array e seu tamanho

//	Exemplo 2: Matriz bidimensional
	float matriz[2][2]={{0,1},{2,3}};

	float det(float mt[2][2]){	//Cálculo do determinante de uma matriz 2x2
		return ((mt[0][0]*mt[1][1])-(mt[1][0]*mt[0][1]));
	}
	printf("O determinante da matriz é: %.2f\n",det(matriz));
	//Passa o ponteiro da matriz(array) como argumento

	return 0;
}
