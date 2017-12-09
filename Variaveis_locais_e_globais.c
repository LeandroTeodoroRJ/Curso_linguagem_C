//************************************************************************
//						VARIÁVEIS LOCAIS E GLOBAIS
//************************************************************************
/*
	Variáveis declaradas dentro do escopo principal são acessíveis
	a todas as funções de escopos inferiores. A essas variáveis damos 
	o nome de variáveis globais. 
	Variáveis declaradas dentro de uma função específica são acessíveis
	no seu escopo e escopos inferiores. E são chamadas de variáveis locais
	Observe os exemplos abaixo:	
*/	
//*************************************************************************

#include <stdio.h>

int main(){
	char var_global[30]="Variável global";	//Declaração uma variável global

	void imprime_mensagem(){ 		
		char str[30]="Variável local";  //Declaração de uma variável local
		printf("%s\n",var_global);  //A variável global é acessível no 
									//escopo principal e inferiores.
		printf("%s\n",str);		//A variável local é acessível dentro da
								//própria função que foi declarada e escopos
								//inferiores.
		void func2(){
		printf("%s\n",str);		//Variável local sendo acessada por um escopo
		}						//inferior
		func2();
	}

	imprime_mensagem();		
//	printf ("%s\n",str);		//Descomantar a linha e tentar compilar,
								//observe que será levantada uma exceção
								//pois variáveis locais não são acessíveis
								//por um escopo superior.

	return 0;

}

/*
		Escopo:
  main()
	|	
	char var_global
	|
	imprime_mensagem()
	|		|
	|		char str
	|		|
	|		func2()

*/