//		Limpeza do Buffer de Entrada
/*
	O problema é causado pela caractere residual
que fica no buffer de entrada depois de uma função
de leitura com o uso da tecla enter. Dependendo 
do sistema operacional esse erro pode ser corrigido 
de formas difentes.

Na primeira compilação comente todo o bloco limpeza
de buffer para visualizar o erro. Teste cada sugestão
para saber se o erro foi resolvido.
*/

#include <stdio.h>

void limpa_buffer(void){	//Rotina customizada para limpar o buffer
	char c;
	while ((c=getchar() != '\n' && c != EOF));
}

int main(){

	char a, b, c;

	a = getchar();
		//Funções para limpeza de buffer
//		fflush(stdin);
//		setbuf(stdin, NULL);
//		getchar();
//		limpa_buffer();
	b = getchar();
		//Funções para limpeza de buffer
//		fflush(stdin);
//		setbuf(stdin, NULL);
//		getchar();
//		limpa_buffer();
	c = getchar();
		//Funções para limpeza de buffer
//		fflush(stdin);
//		setbuf(stdin, NULL);
//		getchar();
//		limpa_buffer();

	printf("%c\n",a);
	printf("%c\n",b);
	printf("%c\n",c);

	return 0;
}

//Fonte: https://www.youtube.com/watch?v=W-X2_v4Oyx8
