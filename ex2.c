#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int n1, int n2);
int dobro(int num);
void main()
{
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, res, dob1, dob2;
	
	printf("Digite um primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	res=soma(num1, num2);
	
	printf("%d + %d = %d\n", num1, num2, res);
	
	dob1= num1*2;
	dob2= num2*2;
	
	printf("O dobro de %d é %d\n", num1, dobro(num1));
	printf("O dobro de %d é %d\n",num2, dobro(num2));

}

int soma(int n1, int n2)
{
	int result;
	result= n1+n2;
	return result;
}

int dobro(int num)
{
	return (2*num);
}

