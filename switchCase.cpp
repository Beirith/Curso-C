#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main(){
	
	bool runApp = true;
	setlocale(LC_ALL, "");
	
	do{
		float valor1, valor2, resultado;
	    int opcao;
	
	    printf("1 - Somar\n");
	    printf("2 - Subtrair\n");
	    printf("3 - Dividir\n");
	    printf("4 - Multiplicar\n");
	    printf("Selecione a opção desejada: ");
	    scanf("%d", &opcao);
	    
	    if(opcao > 4){
	    	
	    	printf("Opcão inválida! Tente novamente\n"); 	
				
		}else{
			
			printf("Digite dois valores: ");
		    scanf("%f %f", &valor1, &valor2);
		    
		    switch(opcao){
		
		        case 1:
		            resultado = valor1 + valor2;
		            printf("A soma dos valores é: %.2f\n", resultado);
		            break;
		
		        case 2:
		            resultado = valor1 - valor2;
		            printf("A subtração dos valores é: %.2f\n", resultado);
		            break;
		
		        case 3:
		            resultado = valor1 / valor2;
		            printf("A divisão dos valores é: %.2f\n", resultado);
		            break;
		
		        case 4:
		            resultado = valor1 * valor2;
		            printf("A multiplicação dos valores é: %.2f\n", resultado);
		            break;
		
		        default:
		            printf("Opcão inválida! Tente novamente\n");
		
		        }			
		}
		
	}while(runApp = true);
    }
