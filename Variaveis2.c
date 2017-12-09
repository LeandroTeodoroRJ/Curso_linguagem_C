//************************************************************************
//			Variáveis 2 - Auto incremento e decremento
//************************************************************************
/*
	Observe as linhas de código abaixo:
*/	
//*************************************************************************

#include <stdio.h>

int main(){
	int var1=3;
	int var2=5;
	
	var1=var1+4;	//var1 recebe o valor dela mesma + 4 unidades,
					//var1=3+4=7

	var1+=4;		//Forma resumida
					//var1 recebe o valor dela mesma + 4 unidades,
					//var1=7+4=12
	
	var1=var1+var2;	//var1 recebe o valor dela mesma + var2,
					//var1=7+5=12

	var1+=var2;		//Forma resumida

	var1=var1*3;	//var1 recebe ela mesma multiplicado por 3

	var1*=3;		//Forma resumida (também válido para as
					//outras operações matemáticas)

	var2=var2+1;	//var2 recebe o valor dela mesma + 1 unidade,
					//var2=5+1=6  (incrementa a variável var2)

	var2++;			//var2 recebe o valor dela mesma + 1 unidade,
					//var2=6+1=7  (incrementa a variável var2)

	var2=var2-1;	//var2 recebe o valor dela mesma - 1 unidade,
					//var2=7-1=6  (decrementa a variável var2)

	var2--;			//var2 recebe o valor dela mesma - 1 unidade,
					//var2=6-1=5  (decrementa a variável var2)

	var1=++var2;	//Equivalente a var2=var2+1 então, var1=var2
	
	var1=var2++;	//Equivalente a var1=var2 só depois, var2=var2+1  	

	return 0;

}



