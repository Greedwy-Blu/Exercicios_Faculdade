#include <stdio.h>

int main(int argc, char const *argv[])
{

int i, qntd, n;
float vet[qntd], maior = 0;

printf ("Digite a quantidade de elementos: ");
scanf ("%d", &qntd);
printf ("Ate onde considerar: ");
scanf ("%d", &n);

maior = vet[0];

for (i = 0; i < n; i++) {

     for (i = 0; i < n; i++) {
    if (i == 0) {
        maior = vet[i];
    }
    if (vet[i] > maior) {
        maior = vet[i];
    }
}


    }



}
