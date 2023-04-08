#include <stdio.h>

int main()
{

   int num1, num2, op;

   printf("digite o primeiro numero: ");
   scanf("%d", &num1);

   printf("digite o segundo numero: ");
   scanf("%d", &num2);

   printf("Escolha uma opção para o seu calculo");
   printf("1 - soma");
   printf("2 - sub");
   printf("3 - mult");
   printf("4 - div");

   printf("digite a opção");
   scanf("%d", &op);

   switch (op)
   {
   case 1:
    printf("sua soma: %d", num1+num2);
    break;
   case 2:
   printf("sua sub: %d", num1-num2);
    break;
   case 3:
    printf("sua mult: %d", num1*num2);

    break;
   case 4:
    printf("sua div: %d", num1/num2);

    break;

   default:
   printf("não deu");
    break;
   }




    return 0;
}
