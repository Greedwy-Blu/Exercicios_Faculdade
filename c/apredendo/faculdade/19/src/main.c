#include <stdio.h>

int main(int argc, char const *argv[])
{
   int senha_valida, senha_forn;

   printf("por favor digite a sua senha ");
   scanf("%d", &senha_forn);

   senha_valida = 1234;


   if (senha_forn == senha_valida)
   {
    printf("ACESSO	PERMITIDO");
   }
   else{
    printf("ACESSO	NEGADO");
   }


    return 0;
}
