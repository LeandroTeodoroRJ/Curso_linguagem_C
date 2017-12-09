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

int main(){
	
	void mensagem(){ 
		int a=0;		
		printf("Curso de C.\n");
		void func2(){
			a=1;
			printf("Função func2\n");
		}
		func2();	//Chamada de func2
	}

	void func3(){
		printf("Função func3\n");
	}

	mensagem();		
	func3();		

	return 0;

}

/*
	Nesse código existem 4 funções declaradas: a função main, mensagem, func2 
	e func3.
	Note que a função func2 é declarada dentro da função mensagem, então, nesse
	caso a organização do escopo fica da seguinte forma:

  main	
	|	
	|mensagem
	|	|func2
	|
	|func3

	O escopo da função main é o principal.	
	As funções mensagem e func3 estão declaradas dentro do escopo da 
	função main. E a função func2 está declarada dentro do escopo da função
	mensagem.
	É possível chamar funções dentro do escopo, sendo assim a função main
	pode chamar as funções mensagem e func3. E a função mensagem pode chamar
	a funcão func2.
	Os escopos superiores da função func2 são os escopos das funções mensagem
	e main. E o escopo superior da função func3 é o escopo da função main.

*/