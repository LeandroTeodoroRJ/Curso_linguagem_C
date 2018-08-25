#include <stdio.h>

int main(){

int array[]={0,1,2,3,4,5};
int array_da_funcao[3];
int *resultado;

int *retorna_array(){
    int i;
    for (i = 0; i < 3; ++i) {
        array_da_funcao[i] = array[i+2];
    }
    return array_da_funcao;
}

resultado = retorna_array();

printf("%i\n",resultado[0]);
printf("%i\n",resultado[1]);
printf("%i\n",resultado[2]);

return 0;
}
