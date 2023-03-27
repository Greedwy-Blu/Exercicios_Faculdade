#include <stdio.h>

int main(int argc, char const *argv[])
{

    char nome;
    float nota1,nota2,nota3, media;

     printf("digite o seu nome\n");
    scanf("%s",nome);
    printf("digite a sua nota 1");
    scanf("%f",nota1);
    printf("digite a sua nota 2");
    scanf("%f",nota2);
    printf("digite a sua nota 3");
    scanf("%f",nota3);

    media =  nota1+nota2+nota3/3;

   printf("nome: %s", nome);

    printf("media é de: %f",media);


    return 0;
}
