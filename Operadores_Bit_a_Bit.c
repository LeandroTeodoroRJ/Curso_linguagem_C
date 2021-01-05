// ************* OPERADOES BIT A BIT ****************

#include <stdio.h>
#include <stdlib.h>

int var;
int var2;
int resultado;

int main()
{
    var = 195;      //Bin: 11000011
    var2 = 60;      //Bin: 00111100

//  Lógica OR bit a bit
    resultado = var | var2;
    printf("%i\n", resultado);
    printf("");

//  Lógica AND bit a bit
    resultado = var & var2;
    printf("%i\n", resultado);
    printf("");


//  Lógica EX-OR bit a bit
    resultado = var ^ var2;
    printf("%i\n", resultado);
    printf("");


//  Rotaciona 1 bit a esquerda
    var = 5 << 1;
    printf("%i\n", var);
    printf("");

//  Rotaciona 1 bit a direita
    var = 5 >> 1;
    printf("%i\n", var);
    printf("");

    system("pause");
    return 0;
}

/*

Operator    Description     Example     Same as     Result  Decimal
&           AND             x = 5 & 1   0101 & 0001 0001    1
|           OR              x = 5 | 1   0101 | 0001 0101    5
<<          Left shift      x = 5 << 1  0101 << 1   1010    10
>>          Right shift     x = 5 >> 1  0101 >> 1   0010    2

Forma simplificada: (a = a >> 1) == (a>>=1)

*/
