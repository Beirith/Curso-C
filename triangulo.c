#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    int a, b, c;

    printf("Digite tr�s valores: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a==b && b==c){
        printf("O tri�ngulo � equil�tero!");
    }

    else{
        printf("O tri�ngulo n�o � equil�tero!");
        if(a==b || b==c || a==c){
            printf("\nO tri�ngulo � is�sceles!");
        }
        else{
            printf("\nO tri�ngulo � escaleno!");
        }
    }
}
