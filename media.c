#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    float nota1, nota2;

    scanf("%f", &nota1);
    scanf("%f", &nota2);

    printf("A média é: %f", (nota1+nota2)/2);

}

