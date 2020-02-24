//************************************************************************
//							   O ESCOPO
//************************************************************************
/*
	Escopo pode ser entendido como regiões do código. O escopo está 
	organizado em níveis, sendo chamado escopo principal a estrutura
	de mais alta hierarquia. 
	Observe o exemplo abaixo:
	
*/	
//*************************************************************************

#include <stdio.h>

int var1;		//Essa é uma variável global pode ser acessada em 
				//qualquer parte do programa. Assim torna-se o 
				//escopo de maior hierarquia.

void func1(){		//Declaração de uma função.
	int var_local;	//Essa é uma variável local, só pode ser acesada
					//pela função que a declarou.
	var_local=7;
	var1=9;			//Acessando uma variável global por uma função fora da main
}

int main(){
	var1=3;			//Acessando a variável global;
//	var_local=5;	//Aqui o compilador levantará uma exceção pois estamos
					//tentando acessar uma variável local fora do seu escopo.
					//Descomente a linha para ver...
}
