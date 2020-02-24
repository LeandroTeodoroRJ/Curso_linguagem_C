//************************************************************************
//						Entrada de Dados
//************************************************************************
//
//	Neste tópico estudaremos a entrada padrão de dados(teclado).
//
/*

Quando usar as funções de entradas de dados:
A função scanf(..., ...)  é usada, sem problemas, para ler variáveis simples, 
numéricas ou char de um caracter, e para vetores dos tipos citados.
Entretanto, apresenta limitação para vetor de char, uma vez que abandona ao 
encontrar um espaço.
Seu uso é ideal quando você tiver certeza de não haver a menor possibilidade 
de a resposta conter espaço. Tal como: sigla do estado, estado civil, url etc.

A função gets(...) resolve o problema da inclusão de mais de uma palavra, 
aceitando espaço, mas não tem nenhum controle sobre o números de caracteres 
armazenados tanto é que vários compiladores alertam para a insegurança 
do seu uso. Não sendo aconselhado seu uso

A função fgets(..., ...., ....), assim como gets(...), lê todos os caracteres, 
inclusive espaços, mas especifica em um dos parâmetros o máximo de caracteres 
que poderá ser armazenado.
Um dos parâmetros indica, através da sigla stdin que a leitura será 
feita do teclado.
Reforçamos que a leitura termina quando se pressiona a tecla enter ou n-1 
caracteres tenham sido lidos, justificando a inserção do terminador nulo(’\0’).
Muita atenção para a adição de uma nova linha quando o conteúdo digitado 
não ultrapassar a n-1 caracteres.

*/
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

//  Utilizando a função fgets
	char strvar[100];
//	fgets(vetor de char, tamanho de leitura <int>, local de leitura);
//	stdin - Standart Input - Entrada Padrão
	fgets(strvar, 100, stdin);  //Lê 99 caracteres já que 1 é reservado
								//para o caractere nulo \0
	printf("%s", strvar);	//Imprime na tela a string

}



