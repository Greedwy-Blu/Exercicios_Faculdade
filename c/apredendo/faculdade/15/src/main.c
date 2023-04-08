#include <stdio.h>

int main(int argc, char const *argv[])
{
    int mes, nasc;

    printf("digite o mês de 1 a 12: ");
    scanf("%d", &mes);
     printf("digite o dia que você nasceu");
     scanf("%d", &nasc);


     if(mes == 1  ||  mes == 2  ){

         if ((nasc  >= 21 && mes == 1) && (nasc <= 19 && mes == 2))
         {
            printf("aquario");
         }
         else if ((nasc >= 20 && mes == 1) && (nasc  <= 19 && mes == 2))
         {

             printf("capricórnio");

         }
         else if (nasc == 20 && mes == 2)
         {
            printf("peixes");
         }



     }

     else if(mes == 3 || mes == 4 ){

         if ((nasc  >= 21 && mes == 3)&& (nasc <= 20 && mes == 4))
         {
            printf("Áries");
         }
         else if (nasc == 21 && mes == 4)
         {
             printf("Touro");
         }




     }

     else if(mes == 5 || mes == 6){

         if ((nasc >= 21 && mes == 5)&& (nasc <= 20 && mes == 6))
         {
            printf("Gêmeos");
         }
          else if (nasc == 20 && mes == 5)
         {
             printf("Touro");
         }
         else if (nasc == 21 && mes == 6)
         {
             printf("Cancer");
         }

     }

     else if(mes == 7 || mes == 8){

         if (nasc == 21 && mes == 7)
         {
            printf("Cancer");
         }

          else if ((nasc >= 22 && mes == 7)&& (nasc <= 22 && mes == 8))
         {
             printf("Leão");
         }
         else if (nasc >= 23 && mes == 8) {
             printf("virgem");
         }


     }


     else if(mes == 9 || mes == 10){

        if ( (nasc  <= 22 && mes == 9))
         {
            printf("virgem");
         }
          else if ((nasc >= 23 && mes == 9)&& (nasc <= 22 && mes == 10))
         {
             printf("libra");
         }

     }

     else if(mes == 11 || mes == 12){


         if ((nasc  >= 23 && mes == 10)&& (nasc <= 21 && mes == 11))
         {
            printf("escorpião");
         }

        else if ((nasc >= 22 && mes == 11)&& (nasc <= 21 && mes == 12))
         {
             printf("Sagitário");
         }

          else if (nasc >= 22 && mes == 12)
         {
             printf("capricórnio");
         }

     }
     else{
        printf("não existe esse mês");
     }



    return 0;
}
