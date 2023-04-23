#include <stdio.h>

int main(int argc, char const *argv[])
{
    float opcao, altura, h, m, resul ;
    printf("digite o seu sexo 1:feminino, 2:masculino: ");
    scanf("%f",&opcao);
     printf("digite a altura: ");
    scanf("%f",&altura);

    if (opcao == 1)
    {

       m =	(62.1*altura);
       resul = m-58;

        printf("seu pesso ideal:: %f", resul);

    }else if (opcao == 2)
    {
        h =	(72.2*altura);
       resul = h-44.7;

        printf("seu pesso ideal: %f", resul);
    }else{
        printf("opção não existente");
    }




    return 0;
}
