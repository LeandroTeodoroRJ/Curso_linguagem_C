//************************************************************************
//					ARRAY COMO PARÂMETROS DE FUNÇÕES
//************************************************************************
/*
	Um array pode ser passado como argumento de uma função, conforme
	o exemplo abaixo:
*/
//*************************************************************************
	
#include <stdio.h>
		

int main(){ 	
//	Exemplo 1:	
	float var[]={4,5,7,9};
	int elementos=(sizeof(var)/4);	//Número total de elementos
	
	float media(float num[],int total){ //Tira a média dos números
		float md;
		int i;
		float soma=0;
		for (i=0;i<total;i++){
			soma=soma+num[i];
		}
		md=soma/total;
		return md;
	}
	printf("A média é: %.2f\n",media(var,elementos));

//	Exemplo 1: Matriz bidimensional
	float matriz[2][2]={{0,1},{2,3}};

	float det(float mt[2][2]){
		return ((mt[0][0]*mt[1][1])-(mt[1][0]*mt[0][1]));
	}
	printf("O determinante da matriz é: %.2f\n",det(matriz));

	return 0;				  
}