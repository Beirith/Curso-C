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
	    printf("Selecione a op��o desejada: ");
	    scanf("%d", &opcao);
	    
	    if(opcao > 4){
	    	
	    	printf("Opc�o inv�lida! Tente novamente\n"); 	
				
		}else{
			
			printf("Digite dois valores: ");
		    scanf("%f %f", &valor1, &valor2);
		    
		    switch(opcao){
		
		        case 1:
		            resultado = valor1 + valor2;
		            printf("A soma dos valores �: %.2f\n", resultado);
		            break;
		
		        case 2:
		            resultado = valor1 - valor2;
		            printf("A subtra��o dos valores �: %.2f\n", resultado);
		            break;
		
		        case 3:
		            resultado = valor1 / valor2;
		            printf("A divis�o dos valores �: %.2f\n", resultado);
		            break;
		
		        case 4:
		            resultado = valor1 * valor2;
		            printf("A multiplica��o dos valores �: %.2f\n", resultado);
		            break;
		
		        default:
		            printf("Opc�o inv�lida! Tente novamente\n");
		
		        }			
		}
		
	}while(runApp = true);
    }
