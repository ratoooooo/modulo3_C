#include <stdio.h>
#include <stdlib.h>
#include "matematica.h"
#include <locale.h>
#include <math.h>
void menu();
void main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, ope;
	float divi;
	char op;
	double base, expoente, resultado;
	
	do
	{
		system("cls");
		menu();
		scanf(" %c", &op);
        switch(op)
    	{	
        case '1':
        	printf("Insira o primiero numero: ");
        	scanf("%d", &num1);
        	printf("Insira o segundo numero: ");
        	scanf("%d", &num2);
        	ope=soma(num1, num2);
        	printf("A soma de %d + %d = %d \n", num1,num2, ope);
        	break;
        	
        case '2':
        	printf("Insira o primiero numero: ");
        	scanf("%d", &num1);
        	printf("Insira o segundo numero: ");
        	scanf("%d", &num2);
        	ope=sub(num1, num2);
        	printf("A soma de %d - %d = %d \n", num1,num2, ope);
        	break;
        	
        case '3':
        	printf("Insira o primiero numero: ");
        	scanf("%d", &num1);
        	printf("Insira o segundo numero: ");
        	scanf("%d", &num2);
        	ope=mul(num1, num2);
        	printf("A multiplicação de %d x %d = %d \n", num1,num2, ope);
        	break;
        	
        case '4':
    		printf("Insira o primeiro número: ");
   			scanf("%d", &num1);
    		printf("Insira o segundo número: ");
    		scanf("%d", &num2);
        	divi =  dive(num1, num2);
        	if (num2 == 0)
    		{
        		printf("Divisão por zero\n");  
    		}
    		else
    		{
        		printf("A divisão de %d : %d = %.2f \n", num1, num2, divi);
    		}	
    		break;
    		
    	case '5':	
        	printf("Insira o primeiro número: ");
        	scanf("%d", &num1);
        	printf("Insira o segundo número: ");
       		scanf("%d", &num2);
        	ope=res(num1, num2);
        	printf("O resto da divisão de %d : %d = %d \n", num1, num2, ope);
       		break;
       		
        case '6':
        	printf("Insira o número: ");
       		scanf("%d", &num1);
        	divi = raiz(num1);
       		printf("A raiz quadrada de %d = %.2f \n", num1, divi);
        	break;

        case'7':
   			printf("Digite a base: ");
    		scanf("%lf", &base);
    		resultado = potencia(base, 2);
    		printf("%.2lf elevado ao quadrado = %.2lf\n", base, resultado);
    		break;

       	case '8':
        	printf("Insira a base: ");
    		scanf("%lf", &base);
    		printf("Insira o expoente: ");
    		scanf("%lf", &expoente);
    		resultado = potencia(base, expoente);
    		printf("O %2.lf elevado a  %.2lf é %.2lf\n", base, expoente, resultado);
    		break;
    		
    	case'0':
    		printf("Obrigado por usar o programa\n");
    		break;
    		
    	default:
            	printf("Operação invalida\n");
            	
   		}
   		system("pause");
	}while ( op != 0 );
}
void menu()
{
	system("color 70");
	printf("\tCauculadora\n");
	printf("************************\n");
	printf("|(1) Somar             |\n");
	printf("|(2) Subtrair          |\n");
	printf("|(3) Multiplicar       |\n");
	printf("|(4) Divisão           |\n"); 
	printf("|(5) Resto da Divisão  |\n");
	printf("|(6) Raiz quadrada     |\n");
	printf("|(7) Quadrado          |\n");
	printf("|(8) Potencia          |\n");
	printf("************************\n");
	printf("Digite (0) para sair do proframa\n");
	printf("Escolha uma opção (1-8)\n");
}
