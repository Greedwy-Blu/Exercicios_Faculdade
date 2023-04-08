#include <stdio.h>

int main(int argc, char const *argv[])
{

    char nome[50];
    int idade;
    printf("fala o seu nome: ");
    scanf("%s", &nome);
    printf("fale a sua idade: ");
    scanf("%d", &idade);


    printf("\n o seu nome e: %s", nome);
    printf("\n a sua idade: %d", idade);

    return 0;
}
