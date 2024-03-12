#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void divid(int num);
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite um número: ");
    scanf("%d", &n);
    
   	divid(n);
   	
}
void divid(int num)
{
	int i;
	printf("Divisores de %d: \n", num);
    for (i = num; i >= 1; i--) 
	{
        if (num % i == 0) 
		{
            printf("%d \n", i);
        }
    }
}

