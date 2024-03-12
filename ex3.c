#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void Pong(int a);
void Ping(int a);

void Pong(int a)
{
    switch (a)
    {
    case '1':
        Ping(2);
        break;

    case '2':
    case '3':

        while (a > 0)
        {
            printf("%d\n", a * a);
            a--;
        }
        break;

    default:
        printf("Pong");
    }
}

void Ping(int a)
{
    switch (a)
    {
    case '1':
        Pong(3);
        printf(":(");
        break;

    case '2':
        Pong(100);
        printf(":)");
        break;

    case '3':
        while (a > 0)
        {
            printf("%d", a);
            a--;
        }

        break;
    default:
        printf("Ping");
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("alínea a:");
    Ping(1);
    printf("\nalínea b:");
    Ping(3);
    printf("\nalínea c:");
    Pong(1);
    printf("\nalínea d:");
    Pong(100);
    printf("\nalínea e:");
    Ping(50);
    printf("\n\alínea f:");
    Ping(2);
    printf("\nalínea g:");
    Pong(2);
    return 0; 
}
