#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if(media > 7){
        printf("O aluno foi aprovado! Média = %.2f", media);
        }
    else{
        printf("O aluno foi reprovado! Média = %.2f", media);
    }
}
