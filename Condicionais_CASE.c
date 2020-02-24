//*************************************************************
//				ESTRUTURA SWITCH...CASE
//*************************************************************

/*
A sintaxe dessa estrutura que é ideal para programas que
funcionam através de um menu.

Todavia, ela só pode ser usada quando a variável, ou expressão
que a controla, for do tipo int ou char de um caracter e somente
um valor puder ser colocado em cada case.

Isso precisa ficar claro porque, em algumas linguagens,
podemos colocar intervalos e usar operadores relacionais.

O fluxo começa no ponto onde foi encontrado o valor igual. 
Em algumas linguagens, o término da execução dos comandos 
de um caso força a saída da estrutura, mas isso não acontece na 
linguagem C. Para resolver esse problema, fazemos uso do comando 
break; no final de cada caso. Vale ressaltar que o default 
não é obrigatório, mas serve para exibir alguma mensagem 
no caso do valor não ser igual a nenhum dos rótulos.

*/

#include <stdio.h>

Int main(){
      int mes;
      printf(“\nDigite um número que corresponda a um mês: “);
      scanf(“%d”, &mes);

      switch(mes)      {
        case 1:
        case 2:
        case 3: printf(“\nPrimeiro trimestre\n”);
              break;
        case 4:
        case 5:
        case 6: printf(“\nSegundo trimestre\n”);
              break;
        case 7:
        case 8:
        case 9: printf(“\nTerceiro trimestre\n”);
              break;
        case 10:
        case 11:
        case 12: printf(“\nQuarto trimestre\n”);
              break;
        default: printf(“\nNão corresponde a um mês\n”);
      }

}
