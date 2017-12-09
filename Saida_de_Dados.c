//************************************************************************
//						  	 Saída de Dados
//************************************************************************
//
//	Neste tópico será estudada a impressão de dados pela saída 
//	padrão, o monitor.
//
//*************************************************************************

#include <stdio.h>

int main(){

//	Imprimindo 1 caractere na tela:
	putchar('B');		//A função putchar imprime 1 caracre
	printf("\n");		//Quebra de linha
	char caractere='L';
	putchar(caractere);	//Imprimindo a partir de uma variável
	printf("\n");

//	Imprimindo uma string
	puts("Imprimindo string"); //A função puts imprime uma string na tela
	char str[10]="Curso de C";
	puts(str);  			   //Imprime uma string a patir de uma variável

//	Imprimindo um número (um caractere numérico)
	putchar(49);	//Na tabela ascii o número 1 corresponde ao
					//caractere 49 (procure tabela ascii no Google)
	printf("\n");

//	Obs: Letras e símbolos também podem ser impressos desta forma.
//	Por exemplo, imprimir o símbolo *
	putchar(42);
	printf("\n");
	
	return 0;

}