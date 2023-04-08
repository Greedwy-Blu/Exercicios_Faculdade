#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
setlocale(LC_ALL, "Portuguese_Brazil");

    int dia, mes, ano;

    printf("fale o dia que você nasceu: ");
    scanf("%d", dia);

     printf("fale o mês que você nasceu: ");
    scanf("%d", mes);

     printf("fale o ano que você nasceu: ");
    scanf("%d", ano);


    printf("a sua data de nascimento è: %d/%d/%d", dia, mes, ano );





    return 0;
}
