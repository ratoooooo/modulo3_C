#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float media_n(int num);

void main()
{
    setlocale(LC_ALL, "Portuguese");
    float media;
    int notas;

    printf("Insira o numerom de notas que deseja:");
    scanf("%d", &notas);
    
    media = media_n (notas);
    printf("a media das notas é %1.f", media);
     
}

float media_n(int num)
{
    int i, nota;
    float soma=0, media;
    for (i=1; i<=num; i++)
    {
        printf("Insira a %d nota:\n", i);
        scanf ("%d", &nota);
        soma += nota;
    }
    media = (float) (soma / num);

    return media; 
}
