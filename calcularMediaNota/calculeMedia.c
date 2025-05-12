/*
O programa precisa calcular a media de tres notas inseridas pelos alunos, então:

- receber notas
- armazenar os valores
- calcular as notas recursivamente

*/
#include <stdio.h>

// GLOBAL VARIABLES
float mediaFinal = 0;

// FUNCTIONS PROTOTYPEs
float recebeNotas();
float calculeMedia(float x1, float x2, float x3);

float  recebeNotas(){
    int i = 0;
    float nota[3];

    for (i = 0; i < 3; i++)
    {
        printf("Digite sua nota: \n");
        scanf("%f", &nota[i]);
    }
    mediaFinal = calculeMedia(nota[0], nota[1], nota[2]);
    return mediaFinal;
}

/*rece tres valores, soma todos eles e divide pela quantidae de valores*/
float calculeMedia(float x1, float x2, float x3){
    float mediaAritimetica = ( x1 + x2 + x3 ) / 3;
    return mediaAritimetica;
}

int main(){
    recebeNotas();
    printf("A média é: %.2f\n", mediaFinal);
}