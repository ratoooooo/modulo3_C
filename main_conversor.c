#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "unidades.h" 
#include <ctype.h>

void menu();
void main() 
{
	
	setlocale(LC_ALL, "Portuguese");
	
	char op;
	float unidade_convertida, unidade_a_converter;
	
	do
	{
		system("cls");
		menu();
		scanf("%c",&op);
		switch(toupper(op))
		{
			case 'A':
				printf("Insira a medida em polehgadas que vai ser convertida: ");
				scanf("%f", &unidade_a_converter);
				unidade_convertida=pol_to_cm(unidade_a_converter);
				printf("%.2f polegadas = %.2f centimetros\n", unidade_a_converter, unidade_convertida );
                        break;
            case 'B':
				printf("Insira a medida em Celcius que vai ser convertida: ");
				scanf("%f", &unidade_a_converter);
				unidade_convertida=cel_to_fah(unidade_a_converter);
				printf("%.2f Celcius = %.2f Fahrenheit\n", unidade_a_converter, unidade_convertida );
                        break;
        	case 'C':
				printf("Insira a quantidade de euros que vai ser convertida: ");
				scanf("%f", &unidade_a_converter);
				unidade_convertida=eur_to_esc(unidade_a_converter);
				printf("%.2f Euros = %.2f Escudos\n", unidade_a_converter, unidade_convertida );
                        break;
            case 'D':
				printf("Insira a quantidade de euros que vai ser convertida: ");
				scanf("%f", &unidade_a_converter);
				unidade_convertida=eur_to_dol(unidade_a_converter);
				printf("%.2f Euros = %.2f Dolares\n", unidade_a_converter, unidade_convertida );
                        break;
            case 'E':
				printf("Insira a quantidade de Kilometros que vai ser convertida: ");
				scanf("%f", &unidade_a_converter);
				unidade_convertida=km_to_mi(unidade_a_converter);
				printf("%.2f Kilometros = %.2f Milhas\n", unidade_a_converter, unidade_convertida );
                        break;
            case 'F':
				printf("Insira a quantidade de Litros que vai ser convertida: ");
				scanf("%f", &unidade_a_converter);
				unidade_convertida= l_to_gal(unidade_a_converter);
				printf("%.2f Litros = %.2f Galões\n", unidade_a_converter, unidade_convertida );
                        break;
            case 'G':
				printf("Insira a quantidade de euros que vai ser convertida: ");
				scanf("%f", &unidade_a_converter);
				unidade_convertida= eur_to_lib(unidade_a_converter);
				printf("%.2f euros = %.2f libras\n", unidade_a_converter, unidade_convertida );
                        break;
            case 'H':
				printf("Insira a quantidade de Gramas que vai ser convertida: ");
				scanf("%f", &unidade_a_converter);
				unidade_convertida= g_to_oz(unidade_a_converter);
				printf("%.2f Gramas = %.2f Onças\n", unidade_a_converter, unidade_convertida );
                        break;
            case 'I':
				printf("Insira a quantidade de Quilogramas que vai ser convertida: ");
				scanf("%f", &unidade_a_converter);
				unidade_convertida=kg_to_li(unidade_a_converter);
				printf("%.2f Quilogramas = %.2f Libras\n", unidade_a_converter, unidade_convertida );
                        break;
            case '1':
				printf("Insira a medida em centimetros que vai ser convertida: ");
				scanf("%f", &unidade_a_converter);
				unidade_convertida=cm_to_pol(unidade_a_converter);
				printf("%.2f centimetros = %.2f polegadas\n", unidade_a_converter, unidade_convertida );
                        break;
            case '2':
				printf("Insira a medida em Fahrenheit que vai ser convertida: ");
				scanf("%f", &unidade_a_converter);
				unidade_convertida= fah_to_cel(unidade_a_converter);
				printf("%.2f Fahrenheit = %.2f Celcius\n", unidade_a_converter, unidade_convertida );
                        break;
        	case '3':
				printf("Insira a quantidade de escudos que vai ser convertida: ");
				scanf("%f", &unidade_a_converter);
				unidade_convertida= esc_to_eur(unidade_a_converter);
				printf("%.2f Escudos = %.2f Euros\n", unidade_a_converter, unidade_convertida );
                        break;
            case '4':
				printf("Insira a quantidade de Dolares que vai ser convertida: ");
				scanf("%f", &unidade_a_converter);
				unidade_convertida=dol_to_eur(unidade_a_converter);
				printf("%.2f Dolares = %.2f Euros\n", unidade_a_converter, unidade_convertida );
                        break;
            case '5':
				printf("Insira a quantidade de Milhas que vai ser convertida: ");
				scanf("%f", &unidade_a_converter);
				unidade_convertida=mi_to_km(unidade_a_converter);
				printf("%.2f Milhas = %.2f Kilometros\n", unidade_a_converter, unidade_convertida );
                        break;
            case '6':
				printf("Insira a quantidade de Galões que vai ser convertida: ");
				scanf("%f", &unidade_a_converter);
				unidade_convertida= gal_to_l(unidade_a_converter);
				printf("%.2f Galões = %.2f Litros\n", unidade_a_converter, unidade_convertida );
                        break;
            case '7':
				printf("Insira a quantidade de libras que vai ser convertida: ");
				scanf("%f", &unidade_a_converter);
				unidade_convertida= li_to_eur(unidade_a_converter);
				printf("%.2f libras = %.2f euros\n", unidade_a_converter, unidade_convertida );
                        break;
            case '8':
				printf("Insira a quantidade de Onças que vai ser convertida: ");
				scanf("%f", &unidade_a_converter);
				unidade_convertida= oz_to_g(unidade_a_converter);
				printf("%.2f Onças = %.2f Gramas\n", unidade_a_converter, unidade_convertida );
                        break;
            case '9':
				printf("Insira a quantidade de Libras que vai ser convertida: ");
				scanf("%f", &unidade_a_converter);
				unidade_convertida=li_to_kg(unidade_a_converter);
				printf("%.2f Libras = %.2f Quilogramas\n", unidade_a_converter, unidade_convertida );
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
	system("color 73");
	printf("\t\t\tConversor\n");
	printf("******************************************************************\n");
	printf("|(A) Polegadas para centimetro | (1) Centimetros para Polegadas  |\n");
	printf("|(B) Celcius para Fahnreit     | (2) Fanhreit para Celcius       |\n");
	printf("|(C) Euros para Escudos        | (3) Escudos para Euros          |\n");
	printf("|(D) Euro para Dolares         | (4) Dolares para Euros          |\n"); 
	printf("|(E) Kilometros para Milhas    | (5) Milhas para Quilometros     |\n");
	printf("|(F) Litros para Galoes        | (6) Galoes para Litros          |\n");
	printf("|(G) Euros para Libras         | (7) Libras para Euros           |\n");
	printf("|(H) Gramas para Onças         | (8) Onças para Gramas           |\n");
	printf("|(I) Quilogramas para Libras   | (9) Libras para Quilograma      |\n");
	printf("******************************************************************\n");
	printf("Digite (0) para sair do proframa\n");
	printf("Escolha uma opção (A-I) (1-9)\n");
}

