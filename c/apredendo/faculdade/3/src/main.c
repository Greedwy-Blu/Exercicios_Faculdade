#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char nome;
    float salario, valorVendas,aumento,novo_salario ;

    printf("por favor digite o seu nome: ");
    scanf("%s", &nome);
     printf("por favor digite o seu salario fixo: ");
    scanf("%f", &salario);
     printf(" por favor digite o total de vendas efetuadas em dinheiro: ");
    scanf("%f", &valorVendas);

   aumento = valorVendas * 0.15;
   novo_salario = salario +aumento;

    printf("nome: %s",nome);
    printf("salario fixo: %f",salario);
    printf("valor das vendas: %f",valorVendas);
    printf("salario bonificado com os valor da venda: %f",novo_salario );



    return 0;
}
