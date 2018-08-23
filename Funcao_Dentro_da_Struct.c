#include <stdio.h>

struct TipoEstrutura {
        int value;
        void (*bar) (int * value);  //É passado o ponteiro da função
} ;

void get_value (int * value) {
        printf ("Digite um valor: ");
        scanf ("%d", value);
}

int main () {
        struct TipoEstrutura NomeEstrutura;
        NomeEstrutura.value = 0;

        printf ("Valor (antes): %d\n", NomeEstrutura.value);
        NomeEstrutura.bar= get_value;
        NomeEstrutura.bar(&NomeEstrutura.value);
        printf ("Valor (depois): %d\n", NomeEstrutura.value);

        return 0;
}
