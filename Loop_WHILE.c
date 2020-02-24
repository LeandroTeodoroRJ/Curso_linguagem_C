//************************************************************************
//							Loop com WHILE
//************************************************************************
/*
	O loop com while tem uma estrutura mais simples que o loop com for.
	A condição é testada no início de cada iteração, sendo verdadeira,
	o bloco de comandos é executado.
	A sintaxe é mostrada abaixo:
		
	while (condição){
		bloco de
		comandos
	}
*/	
//*************************************************************************

#include <stdio.h>

int main(){
	
//	Observe os exemplos:

//	O incremento pode estar posicionada em qualquer lugar do bloco...
	int x=0;		//Inicialização	
	while (x<=2){	//Condição testada do início do loop
		x++;		//Incremento
		printf("O valor de x é: %i\n",x);
	}

//	...pois é difedente executar no começo ou no final.
	x=0;
	while (x<=2){	//Condição testada do início do loop
		printf("O valor de x é: %i\n",x);
		x++;		//Incremento
	}


//	Aceita condicções que não são matemáticas
	char letra=' ';			//Inicialização
	while (letra!='q'){		//Condição
		printf("Digite a letra q:\n");
		scanf("%c%*c",&letra);//%*c ignora o último caractere recebibo (enter - \n)
							  //ou passaria 2 vezes pelo loop.	
	}	
	
	return 0;

}



