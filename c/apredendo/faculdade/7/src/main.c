#include <stdio.h>

int main(int argc, char const *argv[])
{

    float vc, p =5, r;
    printf("digite o valor da compra");
    scanf("%f", &vc);

     r = vc/p;

     printf("o valor das prestações: %.2f", r);

    return 0;
}
