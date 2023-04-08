#include <stdio.h>

int main(int argc, char const *argv[])
{
 int num;
 num=10;
 printf("Digite o valor de  num: ");
 scanf("%d", &num);
 num = 20;

 printf("\no numero = %d", num);

 if(num > 10 ){
    printf("numero é maior que dez");
 }
 else if(num==10){
     printf("numero é igual a dez");
 }
 else if(num < 10){
     printf("numero é menor que a dez");
 }
 else{
    printf("erro");
 }



    return 0;
}
