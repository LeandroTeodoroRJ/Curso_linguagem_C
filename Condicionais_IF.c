//************************************************************************
//						Estruturas condicionais - IF
//************************************************************************
/*
	Neste tópico aprenderemos o uso da estrutura condicional if. É 
	utilizada para desvio do fluxo do programa após um teste lógico.
	Os blocos de instruções são delimitados pelas chaves que abrem
	e fecham { }.
	Sintaxe:
	if (teste lógico){
		Bloco de instruções para 
		teste lógico verdadeiro
	}else{
		Bloco de instruções para 
		teste lógico falso
	}	
	
*/	
//*************************************************************************

#include <stdio.h>
#include <stdbool.h> 

int main(){
	if (3>6){	//Teste lógico
		//Caso verdadeiro, executa o bloco abaixo.
		printf("Verdadeiro, 3 é maior que 6.\n");
	}else{
		//Caso falso, executa o bloco abaixo.
		printf("Falso, 3 não é maior que 6.\n");
	}

//	O bloco else é opcional. Se o teste obtiver resultado falso 
//	o programa pula o bloco de instruções.
	if (3!=6){
		printf("Verdadeiro.\n");
		printf("O número 3 é diferente de 6.\n");
	}

	if ('a'=='b'){
		printf("Verdadeiro.\n");
		printf("A letra a é igual a letra b.\n");
	}


//	Sintaxe quando existe apenas uma linha para ser executada. 
//	Se o teste obtiver resultado falso o programa pula a linha
	if ((4+2)>=7) printf("Teste lógico 1 verdadeiro\n");
	if (!(6>=7)) printf("Teste lógico 2 verdadeiro\n");

//	Utilizando o if com variáveis
	int num1, num2;
	printf("Digite o primeiro número inteiro:");
	scanf("%i",&num1);
	printf("Digite o segundo número inteiro:");
	scanf("%i",&num2);
	if (num1>=num2){
		printf("O primeiro número é maior ou igual ao segundo.\n");
	}else{
		printf("O primeiro número é menor que o segundo.\n");
	}

	return 0;

}



