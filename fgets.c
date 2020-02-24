//		FUNÇÃO PARA LEITURA DE STRINGS DE ARQUIVOS
//		fgets(ponteiro char, tamanho, ponteiro FILE)

// Aqui ao invés de utilizarmos stdin utilizaremos um
// ponteiro do tipo FILE

#include <stdio.h>

int main(){
	FILE *arquivo;
	char linhas[100];

	arquivo = fopen("arq_fgets.txt","r");

	while(fgets(linhas, 100, arquivo) != NULL){ //Retorna NULL quando chegar ao final do arquivo
		printf("linha: %s", linhas);
	}
	fclose(arquivo);
	return 0;
}
