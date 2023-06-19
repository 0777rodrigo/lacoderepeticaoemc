#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int filhos, contador;
    float media, salario, mediasalario, mediafilhos, menorsalario, maiorsalario;
    float somasalario, totalfamilias, somafilhos;

   

    printf("informe seu salario \n");
    scanf("%f", &salario);

    printf("informe o numero de filhos \n");
    scanf("%d", &filhos);

    somasalario += salario;
    somafilhos += filhos;
    contador++;

    media = somasalario / contador;
    media = somafilhos / contador;

    if (salario > maiorsalario)
    {

        printf("maiorsalario");
    }
    else
    {

        if (salario < menorsalario)

            printf("menor salario");
    }

    printf("total de familias %f \n", totalfamilias);
    printf("media salarial %f \n ", mediasalario);
    printf("media de filhos %f \n ", mediafilhos);
    printf("menor salario %f \n ", menorsalario);
    printf("maior salario %f \n ", maiorsalario);
    {
    }

    return 0;
}