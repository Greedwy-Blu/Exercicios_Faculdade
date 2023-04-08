#include <stdio.h>

int main(int argc, char const *argv[])
{
   float nota1, nota2, nota3, media;

   printf("digite a sua primeira nota: ");
   scanf("%f", &nota1);
   printf("digite a sua segunda nota: ");
   scanf("%f", &nota2);
   printf("digite a sua terceira nota: ");
   scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;

    printf("sua media é de: %2.f", media);


    return 0;
}
