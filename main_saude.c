#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "nutricao.h"
#include <ctype.h>

void menu();
void menu2();
void main()
{
    setlocale(LC_ALL, "Portuguese");

    char op;
    float peso, altura, imc, mas_gorda;
    int idd;

    do
    {
    	system("cls");
        menu();
        scanf("%c", &op); 
        switch (op)
        {
            case '1':
                printf("Insira o peso em kg: ");
                scanf("%f", &peso);
                printf("Insira a altura em metros: ");
                scanf("%f", &altura);
                imc = IMC(peso, altura);
                printf("O IMC é %.2f\n", imc);
                
                if (imc <= 18.5)
				{
					printf("O IMC de %.2f é abaixo do peso\n", imc);
				}
				else if ((imc >= 18.5) && (imc <= 25.9))
				{
					printf("O IMC de %.2f é peso normal\n", imc);
				}
				else if ((imc >= 26) && (imc <= 29.9))
				{
					printf("O IMC de %.2f é Excesso de peso\n", imc);
				}
				else if ((imc >= 30) && (imc <= 34.9))
				{
					printf("O IMC de %.2f é Obesidade grau I\n", imc);
				}
				else if ((imc >= 35) && (imc <= 40))
				{
					printf("O IMC de %.2f é Obesidade grau 2\n", imc);
				}		
                break;
                
            case '2':
                massa_gor();
				break;
            case '0':
                printf("Obrigado por usar o programa :)\n");        
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                
        }
        system("pause");
    } while (op != '0');
}
void menu()
{
    printf("Calculadora - Saúde\n");
    printf("*******************\n");
    printf("* (1) IMC         *\n");
    printf("* (2) Massa Gorda *\n");
    printf("*******************\n");
    printf("Digite (0) para sair do programa.\n");
    printf("Escolha uma opção (1-2): ");
}
void menu2()
{
    printf("Sexo\n");
    printf("***************\n");
    printf("*(M) Masculino*\n");
    printf("*(F) Feminino *\n");
    printf("***************\n");
}


 
