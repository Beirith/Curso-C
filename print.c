#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //Imprime uma string na tela
    setlocale(LC_ALL,"");
    float idade = 21.5;
    printf("oi, meu nome é Isaque e eu tenho %.1f anos", idade);
}
