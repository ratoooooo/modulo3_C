#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void linha(int num, char sim)
{
	int i;
	
	for(i=0; i<num; i++)
	{
		printf("%c", sim);
	}
	
}

void main()
{
	system("cls");
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	linha(3,'*');
	
	printf("\n");
	
	linha(5,'+');
	
	printf("\n");
	
	linha(7, 'X');
	
	printf("\n");
	
	linha(5,'+');
	
	printf("\n");
	
	linha(3,'*');
	
	printf("\n");
	
	system("pause");
}

