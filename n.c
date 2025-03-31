#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome [50];
    float nota1;
    float nota2;
    int faltas;
    float nota_media;

    printf("Bem vindo ao sistema de notas para o colégio Tancredo Neves! \n");
    printf("Digite o seu nome: \n");
    scanf("%s", nome);

    printf("Bem vindo %s !\n", nome);

    printf("Digite sua primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite sua segunda nota: \n");
    scanf("%f", &nota2);

    nota_media = (nota1 + nota2) /2;

    printf("Digite quantas faltas voce teve: \n");
    scanf("%d", &faltas);


    printf("media: %.2f \n", nota_media);
    printf("faltas do ano: %d \n", faltas);

    if (nota_media <= 6 || faltas >= 15 ){
        printf
    }


    return 0;


}



