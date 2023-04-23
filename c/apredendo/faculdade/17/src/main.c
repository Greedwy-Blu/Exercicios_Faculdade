#include <stdio.h>

int main(int argc, char const *argv[])
{
  int mes, dia;

  printf("digite o seu dia:");
  scanf("%d", &dia);
  printf("digite o seu mês:");
  scanf("%d", &mes);

   if (((dia>=21)&&(mes==3)||(dia<=20)&&(mes==4))){

            printf("Aries");

   }
   else if (((dia>=21)&&(mes==4)||(dia<=20)&&(mes==5)))
   {
    printf("touro");
   }
   else{
    printf("erro");
   }



    return 0;
}
