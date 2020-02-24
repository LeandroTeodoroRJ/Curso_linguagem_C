//************************************************************************
//						Operadores Matemáticos
//************************************************************************
//
//	Neste tópico estudaremos os operadores matemáticos e como realizar
//	alguns cálculos.
//	
//*************************************************************************

/*
Os opradores matemáticos em C são:
+	soma
-	subtração
*	multiplicação
/	divisão
^	exponenciação
%	resto da divisão

*/

#include <stdio.h>

int main(){
	int num1, num2, resultado;
	printf("Digite o primeiro número num1:");
	scanf("%i",&num1);   
	printf("Digite o segundo número num2:");
	scanf("%i",&num2);   

	resultado=num1+num2;
	printf("A soma entre eles é: %i\n", resultado);

	resultado=num1-num2;
	printf("A subtração num1-num2 é: %i\n", resultado);

	resultado=num1*num2;
	printf("A multiplicação entre eles é: %i\n", resultado);

	resultado=num1/num2;
	printf("A divisão num1/num2 é: %i\n", resultado);
	/*
	Fique atento ao operador /, pois se os operandos forem inteiros, 
	inteiro será o quociente. Veja exemplo: 2/4 terá como resultado, zero.
	*/

	resultado=num1%num2;
	printf("O resto da divisão de num1/num2 é: %i\n", resultado);

	resultado=num1^num2;
	printf("A resultado de num1 elevado a num2 é: %i\n", resultado);

	return 0;

}



