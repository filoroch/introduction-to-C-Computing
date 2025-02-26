#include <stdio.h>

/*
    ESPECIFICADORES DE FORMATO
    %d = Imprime um inteiro em formato decimal
    %i = Equivalente a %d
    %f = imprime um número de ponto flutuante no formato padrão
    %e = Imprime um número de ponto flutuante em notação cientifica
    %c = imprime um unico caratere
    %s = imprime uma cadeia (string) de caracteres
*/

int main(){
    char nome[20] = "Filipe";
    char sobrenome[20] = "Dhunior";
    int idade = 20;
    char dataNascimento[20] = "08/03/2004";
    float peso = 49.0;
    double altura = 1.69;

    printf("Nome: %s %s\nIdade: %i\nData de Nascimento %s\nPeso: %.1f\nAltura: %.2f", nome, sobrenome, idade, dataNascimento, peso, altura);
    
    return 0;
}