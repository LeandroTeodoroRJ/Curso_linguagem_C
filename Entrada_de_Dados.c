//************************************************************************
//						Entrada de Dados
//************************************************************************
//
//	Neste tópico estudaremos a entrada padrão de dados(teclado).
//
//*************************************************************************

#include <stdio.h>

int main(){
//	Recebendo 1 caractere
	char crt;
	printf("Digite um Caractere:");
	crt=getc(stdin);	//A função getc retorna 1 caractere recebido
						//da stream indicada. Nesse exemplo, retorna 1 
						//caractere da entrada padrão stdin
	printf("Você digitou o caractere: %c\n",crt);

//	Recebendo um número inteiro
	int num;
	printf("Digite um Número inteiro:");
	scanf("%i",&num);   //Recebe 1 ou mais caracteres da entrada	
						//padrão e converte para inteiro.Alocando
						//na variável num.
	printf("Digite o número inteiro digitado foi: %i\n",num);

//	Recebendo um número float
	float num2;
	printf("Digite a constante Pi:");
	scanf("%f",&num2);   //Recebe 1 ou mais caracteres da entrada	
						 //padrão e converte para float. 
	printf("Digite o número irracional digitado foi: %f\n",num2);

//	Recebendo uma string
	char nome[10];
	printf("Digite o seu primeiro nome:");
	scanf("%s",nome);   //Recebe 1 ou mais caracteres da entrada padrão
						//não é necessário o &
	printf("Seu primeiro nome é: %s\n", nome);

	return 0;

}