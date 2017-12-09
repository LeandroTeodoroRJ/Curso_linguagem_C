//************************************************************************
//			 Saída de Dados Formatada - função printf()
//************************************************************************
//
//	A função printf é utilizada para imprimir dados dos diversos tipos
//	de variáveis exixtentes, ainda possui opções para formatação para
//	uma melhor visualização.
//
//*************************************************************************

#include <stdio.h>

int main(){
//	Imprimindo uma variável inteira
/*
A mensagem que será impressa deverá estar entre aspas dupas ("). O caractere
% indica a posição que a variável será impressa. O caractere i indica que a
variável impressa será do tipo inteira. Então a variável é especificada 
sendo antecedida de uma vírgula.
*/
	int num=34;
	printf("%i",num); 					  
	printf("\n");
	printf("%i\n",num);   //Imprime novamente com a quebra de linha embutida.
	int num2=14;
	printf("%i %i\n",num,num2); //Agora imprime duas variáveis inteiras na
								//tela. O primeiro % recebe num e o seugundo
								//recebe num2.
	printf("%5i\n",num);  //Imprime a variável reservando 5 casas e alinha
					      //à direita.				  
	printf("%-5i\n",num); //Agora alinha à esquerda.	
	int casas=4;
	printf("%*i\n",casas,num);  //Aqui o número de casas é passado por uma
								//variável interira. Note o * no lugar do
								//número, indicando que o compilador usará
								//um parâmetro no lugar do valor numérico.

//Obs: Substituindo i por d(inteiro decimal) tem-se o mesmo efeito.

// Imprimindo um valor ponto flutuante (float)
	float rel1=0.3;
	printf("%f\n",rel1);	//Opção f para ponto flutuante
	printf("%.2f\n",rel1);	//Formata com duas casas decimais após a vírgula.
	printf("%8.2f\n",rel1); //Formata com 8 casa totais e duas decimais.
	printf("%-8.2f\n",rel1);//Alinha à esquerda
	printf("%e\n",rel1); 	//Formata em notação expoente de 10
	printf("%.2e\n",rel1);	//Formata com duas casas decimais após a vírgula.

//	Imprimindo 1 caractere 
	char var='C';
	printf("%c\n",var);			//Opção c para caractere 

//	Imprimindo uma string
	char str[14]="Dennis Ritchie"; 
	printf("%s\n",str);			//Opção s para string
	printf("%.6s\n",str);		//Imprime só os seis primeiros caracteres 
								//da string
	printf("%14.6s\n",str);		//Reserva 14 lugares para a string e alinha
								//à direita
	printf("%-14.6s\n",str);	//Alinha à esquerda

//	Imprimindo um caractere reservado
	int var2=42;
	printf("%c\n", var2);	//A variavel é inteira, mas o função solicita
							//que ela seja impressa como caractere %c.
							//Assim, o correspondente é buscado na tabela
							//ASCII. Quando transformamos uma variável de
							//um tipo para o outro, chamamos a operação
							//de cast.

	return 0;

}