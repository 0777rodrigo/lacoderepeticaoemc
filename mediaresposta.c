#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    float somaNota, nota, contador, media;
    char resposta;

    do
    {

        printf("insira uma nota \n ");
        scanf("%f", &nota);

        somaNota += nota;
        contador++;

        if (media < 0)

            printf("informe denovo \n");

        if (media > 10)

            printf("informe denovo \n");

        printf("resposta %s");

    } while (resposta == 's');

    media = somaNota / contador;

    if (media >= 7)
    {

        printf("aprovado");
    }
    else if (media >= 5)
    {
        printf("recuperacao");
    }
    else
    {
        printf("reprovado");
    }
    return 0;
}
