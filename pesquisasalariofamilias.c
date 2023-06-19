#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    float mediafilhos, mediasalario, filhos, somafilhos, somasalario, salario;
    int contador = 0;

    do
    {

        printf("informe seu salario \n");
        scanf("%f", &salario);

        if (salario < 0)
        {
            break;
        }

        printf("informe o numero de filhos \n");
        scanf("%f", &filhos);

        somasalario += salario;
        somafilhos += filhos;
        contador++;

    } while (salario >= 0);

    mediasalario = somasalario / contador;
    mediafilhos = somafilhos / contador;

    printf("media salarial %f \n", mediasalario);
    printf("media de filhos %f \n", mediafilhos);
    printf("quantidade de familias que corresponderam com a pesquisa %i \n", contador);

    return 0;
}
