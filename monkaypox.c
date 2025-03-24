#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50];
    int idade;
    float altura;
    char genero [20];
    char religiao [50];


    printf("Diga seu nome: ");
    scanf("%s", &nome);

    printf("Diga sua idade: ");
    scanf("%d", &idade);

    printf("Diga sua altura: ");
    scanf("%f", &altura);

    printf("Diga seu genero: ");
    scanf("%s", &genero);

    printf ("Diga sua religiao: ");
    scanf ("%s", &religiao);


    printf("Nome: %s \n", nome);
    printf("Idade: %d \n", idade);
    printf("Altura: %.2f \n", altura);
    printf("Genero: %s \n", genero);
    printf("Religiao: %s \n", religiao);

    return 0;
}
