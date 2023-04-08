#include <stdio.h>

int main(int argc, char const *argv[])
{
    float nota1, nota2, media;

    printf("Digite a nota1: ");
    scanf("%f", &nota1);
    printf("Digite a nota2: ");
    scanf("%f", &nota2);

    media = (nota1+nota2)/2;

   if (media >= 6)
   {
    printf("aprovado");
   }
   else if ((media < 6) && (media >= 4)){
    printf("reprovado");
   }


    return 0;
}
