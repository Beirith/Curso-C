#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    int valor1, valor2, valor3;
    int resultado;

    printf("Digite três valores: ");
    scanf("%d %d %d", &valor1, &valor2, &valor3);

    resultado = valor1 * valor2 * valor3;

    printf("O resultado é: %d", resultado);

}
