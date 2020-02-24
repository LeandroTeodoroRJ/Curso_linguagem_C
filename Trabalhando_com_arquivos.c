//*******************************************************************
//					MANIPULANDO ARQUIVOS
//*******************************************************************

#include <stdio.h>

FILE *arquivo; 		//Declara um ponteiro para o arquivo (ponteiro tipo file)

int main(){

//ABERTURA DE UM ARQUIVO - função fopen(<local e nome do arquivo>,<modo de abertura>)
//Modo de abertura	Breve descrição		Permite leitura	Permite gravação	Arquivo não existente	Arquivo existente	Posição
//		r			Leitura				Sim				Não					NULL					OK					Início
//		w			Escrita				Não				Sim					Cria					Recria				Início
//		a			Acrescenta			Não				Sim					Cria					OK					Fim
//		r+			Leitura/Escrita		Sim				Sim					Cria					Permite alteração	Início
//		w+			Leitura/Escrita 	Sim				Sim					Cria					Recria				Início
//		a+			Leitura/Escrita		Sim				Sim					Cria					Permite acréscimo	Fim

//Por default, o modo padrão é o texto logo não precisa incluir ao final 
//de cada letra que representa o modo de abertura, a letra t. 
//Para que possa abrir no modo binário, se faz necessário o acréscimo da 
//letra b antes, ou depois do sinal de +. Você pode fazê-lo, 
//por exemplo: a+b ou ab+. Escolhemos o segundo.

arquivo = fopen("texto.txt", "r+");	//Caso o arquivo não existir cria

if(arquivo == NULL){
    printf("Arquivo nao pode ser aberto \n");
}
else{
	printf("Arquivo aberto \n");
}

//GRAVAR E LER UM CARACTERE NO ARQUIVO - funções fputc() e fgetc() ambas
//fputc(<variável char>,<ponteiro tipo FILE>)
//fgetc(,<ponteiro tipo FILE>)

fputc('A',arquivo);	//Gravando um char no arquivo
fputc('B',arquivo);	//Continua gravando...
fputc('C',arquivo); //Agora você está no final do arquivo
printf("A posição no arquivo é: %li\n", ftell(arquivo));

rewind(arquivo);	//Volta para o inicio do arquivo, ou seja, 
					//seta o indicador de posição do arquivo no início.
printf("...agora a posição é: %li\n", ftell(arquivo));

while(!feof(arquivo)){		//Checa para saber se chegou ao final do arquivo
	printf("Lendo arquivo: %c\n", fgetc(arquivo)); 	//Lê um caractere na posição
}													//atual do arquivo

//Dicas:
//Para gravar uma string: 	fputs(vetorChar, varPonteiroArquivo)
//Para ler uma string: 		fgets(nomeVariavel, tamanho, varPonteiroArquivo)
//A função fgets já foi usada anteriormente, no entanto o ponteiro do tipo
//FILE apontava para a entrada padrão stdin

//DETECTANTO O FINAL DE UM ARQUIVO - funcao feof(<ponteiro tipo FILE>)
//Essa função retorna 1 quando detectar o fim de um arquivo
//Não confundir com a constante EOF que é -1
//É necessário ter um cuidado especial ao usar a função feof() 
//quando for contar caracteres de um arquivo, pois o resultado 
//será acrescido de, pelo menos, um na contagem.

if (feof(arquivo)==1) printf("Você chegou ao final do arquivo\n");


//FECHAMENTO DE UM ARQUIVO - função fclose(<ponteiro tipo FILE>)
//Se o fechamento for bem sucedido, retorna 0. Caso contrário, retorna EOF, por definição –1 no Windows e Linux.

if(fclose(arquivo) == 0){
    printf("Arquivo fechado com sucesso \n");
}
else{
	printf("O arquivo não pode ser fechado \n");
}

//RENOMEANDO E APAGANDO UM ARQUIVO:
//Retorna 0 se a ação for bem sucedida
rename("texto.txt","texto_renomeado.txt");
remove("texto_renomeado.txt");

//FIM DO PROGRAMA EXEMPLO
	return 0;
}

//OUTRAS FUNÇÕES:

//fprintf()
//Semelhante à função printf(), mas tem um argumento a mais que é o ponteiro de arquivo.
//Com vimos em exemplo anterior, esse ponteiro pode ser substituído por stdin.
//Sintaxe:
//fprintf(varPonteiroArquivo, “%...%...%...”, variáveis);
//A função fputs também segue o mesmo princípio da função puts só que recebe o 
//ponteiro do tipo FILE. O mesmo também vale para fscanf.

//fread()
//Essa função lê um elemento (variável simples, struct ou matriz) do arquivo externo e 
//armazena na MP, cujo endereço está indicado no primeiro parâmetro.
//Sintaxe:
//int fread (void * ptr, size_t tamanho, size_t nmemb, FILE* ptrArq);
//fread (enderecoElemento, tamanho, quantidade, ptrArq);

//fwite()
//Essa função copia um elemento cujo endereço está indicado no primeiro parâmetro 
//(variável simples, struct ou matriz) da MP e grava no arquivo externo, 
//avançando o indicador de fluxo tantos bytes quantos forem os especificados na função.
//Sintaxe:
//int fwrite (void * ptr, size_t tamanho, size_t nmemb, FILE* ptrArq);
//int fwrite (enderecoElemento, tamanho, quantidade, ptrArq);

//fseek(FILE *ptrArq, long offset, int whence)
//fseek (variavelPonteiroArquivo, deslocamento, origem);
//Essa função desloca o indicador de posição de arquivo, apontado por stream, 
//para uma posição que é obtida pelo acréscimo, ou decréscimo, de bytes cujo 
//valor se encontra em offset, à posição indicada por whence.
//Se a ação for bem sucedida, a funçãom retorna 0 caso contrário, retorna –1. 
//O parâmetro whence(ou origem) só pode receber 3 valores:
//Constante	Valor	Posição
//SEEK_SET	0		Início
//SEEK_CUR	1		Atual
//SEEK_END	2		Fim
//O primeiro parêmetro da função recebe o ponteiro tipo FILE
//O parâmetro offset(ou deslocamento): Para arquivo do tipo binário, o 
//número de bytes que deverá ser deslocado a partir da origem. Caso esse 
//valor seja negativo, retrocede, indo em direção ao início, mas, 
//se positivo, avança em direção ao fim do arquivo.
//Para arquivos do tipo texto, esse parâmetro é 0L (constante do tipo long) 
//ou o retorno da função, ftell() podendo ser combinado com uma operação 
//para chegar em uma determinada linha, sendo necessário um 
//cuidado especial, visto que o número de caracteres de cada linha é variável.

//ftell(ponteiro tipo FILE)
//Indica a posição em bytes atual do cursor no arquivo, contado do início
//do arquivo, retorna um long int.

//Funções fgetpos e fsetpos
//As funções fgetpos e fsetpos são interfaces alternativas equivalentes a 
//ftell e fseek (com whence setado para SEEK_SET), configurando e 
//armazenando o valor corrente do offset do arquivo do objeto referenciado 
//por pos. Em alguns sistemas não UNIX, um objeto fpos_t pode ser um 
//objeto complexo e estas rotinas podem ser a única maneira 
//portável de reposicionar um fluxo de texto.

//Renomear um arquivo - função rename
//int rename(const char *nomeAtual, const char *novoNome);
//Como é uma função do tipo int, tem retorno, sendo  0 se a ação de 
//renomear for bem sucedida e diferente de 0, se não for.

//Deletar um arquivo - função remove
//int remove(const char *nomeArquivo);
//Como é uma função do tipo int, tem retorno, sendo 0 se a 
//remoção for bem sucedida e diferente de 0, se não for.
