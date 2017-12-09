//************************************************************************
//						Operadores Lógicos e Relacionais
//************************************************************************
/*
	Esses tipos de operadores são destinados a realizarem testes lógicos,
	assim, cada expressão lógica só pode retornar dois valores: 0 para 
	falso (false) ou 1 para verdadeiro (true). Diferentemente das expressões
	matemáticas, que podem retornar qualquer valor.
	Os operadores relacionais estão apresentados abaixo:
	==		Comparação (igualdade)
	!=		Não igual (diferente de)
	>		Maior que
	<		Menor que
	>=		Maior igual
	<=		Menor igual

	Os operadores lógicos estão apresentados abaixo:
	&&		AND (E) - Retorna verdadeiro se ambas as expressões forem verdadeiras
	||		OR (OU) - Retorna verdadeiro se uma ou outra expressão for verdadeira
	!		NOT (Negação - Inverte o resultado lógico)
	
*/	
//*************************************************************************

#include <stdio.h>
#include <stdbool.h> //Biblioteca com as definições das palavras true e false

int main(){
//	Imprime 1 se a sentença for verdadeira, ou 0 para falso.
	printf("Ex 1. O resultado lógico é: %i\n", (4==4)); //4 é igual a 4?
	printf("Ex 2. O resultado lógico é: %i\n", (3>6)); //3 é maior que 6?
	printf("Ex 3. O resultado lógico é: %i\n", (3!=6)); //3 é diferente de 6?

//	4+2 maior ou igual a 7? 
	printf("Ex 4. O resultado lógico é: %i\n", ((4+2)>=7));

//	3*8 é maior ou igual a 21+4? Obs: Os parenteses têm prefêrencia
	printf("Ex 5. O resultado lógico é: %i\n", ((3*8)>=(21+4)));


	printf("Ex 6. O resultado lógico é: %i\n", ('a'=='A')); //As letras são iguais?
	char crt='s';	
	printf("Ex 7. O resultado lógico é: %i\n", (crt=='s')); //As letras são iguais?
	printf("Ex 8. O resultado lógico é: %i\n", (crt!='q')); //As letras são diferentes?

	//4 é maior que 3 E 8 é diferente de 0?
	printf("Ex 9. O resultado lógico é: %i\n", (4>3)&&(8!=0)); 

	//4 é maior que 3 OU 8 é diferente de 0?
	printf("Ex 10. O resultado lógico é: %i\n", (4>3)||(8!=0)); 

	printf("Ex 11. O resultado lógico é: %i\n", (true));  //Qual o valor de true? 
	printf("Ex 12. O resultado lógico é: %i\n", (false)); //Qual o valor de false?
	printf("Ex 13. O resultado lógico é: %i\n", !(false));//falso invertido é verdadeiro?
	printf("Ex 14. O resultado lógico é: %i\n", !(3>6));  // ?

//	Agora tente com expressões mais complexas! 
//	(!(5==6)&&(5!=6)&&((2>1)||(5<=4)))	
//	Falso ou Verdadeiro? :)

	return 0;

}



