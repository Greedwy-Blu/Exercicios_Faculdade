#include <stdio.h>

int main(int argc, char const *argv[])
{
   int  nasc, ano_atual, idade;

   printf("digite a o ano de nascimento:");
   scanf("%d", &nasc);

   ano_atual = 2023;
   idade = ano_atual - nasc;

   if (idade >= 18)
   {
    printf("pode votar \n");
    printf("sua idade: %d", idade);

   }
   else if (idade <= 18)
   {
   printf("não pode votar \n");
    printf("sua idade: %d", idade);
   }




    return 0;
}
