#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "recursivas.h"

void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, resultado;
	char op;
	
	do
	{
		system("cls");
		menu();
		scanf(" %c", &op);
        switch(op)
        {
        case '1':
        		printf("Insira o nuemro: ");
        		scanf("%d", &num1);
        		resultado=fatorial(num1);
        		printf("O faturial de %d é %d ", num1, resultado);
        		break;
        		
        case '2':
        		printf("Insira o nuemro: ");
        		scanf("%d", &num1);
        		Dec_bin(num1);
        		printf("\n"); 
        		break;
        		
        case '3':
        		printf("Insira o nuemro: ");
        		scanf("%d", &num1);
        		resultado=somatorio(num1);
        		printf("O somatorio de %d é %d ", num1, resultado);
        		break;
        		
        case'4':
        		printf("Insira a base: ");
    			scanf("%d", &num1);
    			printf("Insira o expoente: ");
    			scanf("%d", &num2);
    			resultado=potencia(num1, num2);
    			printf("A potencia de base %d é %d ", num1, resultado);
    			break;
    			
    	case '5':
    		printf("Insira o primeiro numero ");
    		scanf("%d", &num1);
    		printf("Insira o segundo numero ");
    		scanf("%d", &num2);
   			resultado= Multip_Rec(num1, num2);
    		printf("O produto de %d e %d é igual a %d\n",num1, num2, resultado);
    		break;
    		
    	case '6':
    		printf("Insira um numero ");
    		scanf("%d", &num1);
    		naturais_crescente(num1);
    		break;
    	
    	case '7':
    		printf("Insira um numero ");
   			scanf("%d", &num1);
    		naturais_decrescente(num1);
    		break;
    		
        case'0':
    		printf("Obrigado por usar o programa\n");
    		break;
    		
    	default:
            printf("Operação invalida\n");
        		
        }
        system("pause");
        
	}while(op != 0);
}

void menu()
{
	system("color 70");
	printf("\nRecursividade\n");
	printf("****************************\n");
	printf("|(1) fatorial              |\n");
	printf("|(2) binario               |\n");
	printf("|(3) Somatorio             |\n");
	printf("|(4) potencia              |\n"); 
	printf("|(5) multiplicacao         |\n");
	printf("|(6) naturais_crescente    |\n");
	printf("|(7) naturais_decrescente  |\n");
	printf("****************************\n");
	printf("Digite (0) para sair do proframa\n");
	printf("Escolha uma opção (1-7)\n");
}
