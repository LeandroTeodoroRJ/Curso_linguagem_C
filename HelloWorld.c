//************************************************************************
//					Primeiro Exemplo - Hello World
//************************************************************************
//
//	Obs:	Executar $dpkg -l gcc no Linux para checar se o compilador gcc
//			está instalado. Caso contrário executar 
//			$sudo apt-get install gcc (Debian)
//			Para compilar: $gcc <nome_arquivo_fonte> -o<nome_do_programa>
//			Exemplo:	   $gcc HelloWord.c -oHelloEx1
//			Para executar, na pasta do programa executar: 
//			$./<nome_do_programa>
//
//*************************************************************************

//	Isso é um comentário, em uma mesma linha o que vier depois de // é
//	ignorado pelo compilador

/*
Isso é um comantário com mais de 1 linha 
utilizando caracteres delimitadores * e /
* depois de / abre o comantário, invertendo 
ordem fecha.
*/	

#include <stdio.h>		//Biblioteca padrão para manupulação dos periféricos
						//de entrada e saída do computador

int main(){					  //Função principal que sempre irá existir
	printf("Hello World\n");  //Imprime a string na tela e quebra a linha "\n"
	return 0;				  //Termina o programa com sucesso
}