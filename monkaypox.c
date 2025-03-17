#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[50];
    int idade;
    float altura;
    char genero[1];

    printf("Digite seu nome:  ");
    scanf ("%s", &nome);

    printf("Digite sua idade:  ");
    scanf ("%d", &idade);

    printf("Digite sua altura:  ");
    scanf ("%f", &altura);

    printf("Digite seu genero biologico (m/f):  ");
    scanf ("%s", &genero);


    return 0;
}
