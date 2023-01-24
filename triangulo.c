#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    int a, b, c;

    printf("Digite três valores: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a==b && b==c){
        printf("O triângulo é equilátero!");
    }

    else{
        printf("O triângulo não é equilátero!");
        if(a==b || b==c || a==c){
            printf("\nO triângulo é isósceles!");
        }
        else{
            printf("\nO triângulo é escaleno!");
        }
    }
}
