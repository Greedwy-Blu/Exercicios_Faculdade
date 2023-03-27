#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    float  percorrrido, combustivel, gasto;
    printf("quantos quilometros o carro foi percorrido");
    scanf("%f", &percorrrido);
    printf("por favor forneça o total de combustivel");
    scanf("%f", &combustivel);

    gasto = percorrrido/combustivel;

    printf("o seu carro consome 1 litro a cada: %f", gasto);



    return 0;
}
