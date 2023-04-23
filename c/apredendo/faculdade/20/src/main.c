#include <stdio.h>

int main(int argc, char const *argv[])
{
 float compras, resul ;

 printf("quantidade maças queres comprar:");
 scanf("%f", &compras);

 if (compras < 12)
 {
   resul = compras*0.30;

   printf("resultado da sua compra: %f ", resul);
 }
 else if (compras >= 12)
 {

    resul = compras*0.25;

   printf("resultado da sua compra: %f ", resul);

 }
 else{
    printf("maças");
 }


    return 0;
}
