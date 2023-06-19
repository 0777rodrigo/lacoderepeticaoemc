#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    float media, nota, somaNota, contador;
    char resposta;

    do
    {

        printf("informe sua nota \n ");
        scanf("%f", &media);

        somaNota += nota;
        contador++;

    } while (resposta == 's');

    media = somaNota / contador;

    if (media >= 7)
    {
        printf("aprovado");
    }
    else if (media <= 5)
    {
        printf("recuperacao");
    }
    else if (media < 5)
    {

        printf("reprovado");
    }

    return 0;
}