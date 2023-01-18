#include <stdio.h>

 main()
{
	/* Declaração das variaveis globais */

	int idade, ano;
	float altura;
	char nome[30];

/* Entrada de dados   */

printf("Digite o seu nome:\n ");
scanf("%s", nome);
printf("Digite o seu idade:\n ");
scanf("%d", &idade);
printf("Digite o seu altura:\n ");
scanf("%f", &altura);


/*  Processamento  */

ano = 2023 - idade;

/*  Saída de dados  */

printf("\nO nome e: %s", nome);
printf("\nA idade e: %d", idade);
printf("\nA altura e: %f", altura);
printf("\nO ano e: %d", ano);

return 0;

}