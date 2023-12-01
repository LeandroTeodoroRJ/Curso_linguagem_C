//////////////////////////////////////////////////////////
/*
*   Técnicas para Dispositivos Emcarcados
*   Programação em C
*   Operações com Bits
*
*/
///////////////////////////////////////////////////////////

/*
OPERATORS TABLE
Operator    Description     Example     Same as     Result  Decimal
&           AND             x = 5 & 1   0101 & 0001 0001    1
|           OR              x = 5 | 1   0101 | 0001 0101    5
~           Negation        x = ~3      ~(0011)     1100    12
<<          Left shift      x = 5 << 1  0101 << 1   1010    10
>>          Right shift     x = 5 >> 1  0101 >> 1   0010    2

*/


#include <stdio.h>
#include <stdlib.h>

int var;
int mask;
int teste;


int main(){
    var = 0x0F0F0F0F;      //Bin: 1111000011110000111100001111


    //Setar um bit
    //Reg = Reg | (1 << BitNumber) ..ou.. Reg |= (1 << BitNumber)
    var = var | (1 << 5);


    //Resetar um bit
    //Reg = Reg & ~(1 << BitNumber) ..ou.. Reg &= ~(1 << BitNumber)
    var = 0x0F0F0F0F;
    var &= ~(1 << 0);


    //Setar sequencia de bits
    //Reg |= (1 << FristBitNumber) | (1 << SecondBitNumber) |...
    var = 0x0F0F0F0F;
    var |= (1 << 5)|(1 << 6);


    //Resetar sequencia de bits
    //Reg &= ~((1 << FristBitNumber) | (1 << SecondBitNumber) |...)
    var = 0x0F0F0F0F;
    var &= ~((1 << 0)|(1 << 1));


    //Máscara de bits
    //Reg &= ~(MaskPattern << BitNumber)
    var  = 0x0F0F0F0F;
    mask = 0x0000000F;      //Máscara para 4 bits
    var &= ~(mask << 7);


    //Testar se o bit é igual 1
    var = 0x0F0F0F0F;
    teste = (var & (1 << 4));   //Bit4 igual a 1? - False
    teste = (var & (1 << 2));   //Bit2 igual a 1? - True

    //Testar se o bit é igual 0
    teste = !(var & (1 << 4));  //Bit4 igual a 0? - True
    teste = !(var & (1 << 2));  //Bit2 igual a 0? - False


    //Testar sequencia de bits
    teste =  var & (1 << 4) && !(var & (1 << 5)); // F - V

    teste =  var & (1 << 4) || !(var & (1 << 5));


    printf("\n");
    system("pause");
    return 0;
}


