//************************************************************************
//						 Concatenação de Dados
//************************************************************************
//
//	Concatenação significa unir ou "juntar". Nesse exemplo veremos como
//	concatenar diversos tipos de informações em uma mesma mensagem.
//
//*************************************************************************

#include <stdio.h>

int main(){
//	Concatenando strings
	char str1[12]="Concatenando";
	char str2[9]="Strings";
	printf("%s %s\n",str1,str2); //Note que o espaço foi dado na função printf

//	Inteiro com string
	int idade=22;
	printf("Minha idade é: %i\n",idade);

//	String com float
	float boltz=1.346e-23;
	printf("A constante de Boltzmann é: %.3e J/K\n",boltz);

//	String e inteiro em variáveis diferentes
	char nome[6]="João";
	idade=32;
	printf("Nome: %s - Idade: %i\n",nome,idade);

//	Faça outras experiências! :)

	return 0;

}