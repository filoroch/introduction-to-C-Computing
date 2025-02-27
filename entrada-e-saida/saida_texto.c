#include <stdio.h>

int main(){
    // ISSO NÂO FUNCIONA
    //char[20] novoNome;

    // ISSO FUNCIONA
    char nome[20];
    printf("Digite o seu nome \n");
    scanf("%s", nome);

    printf("Seu nome é %s\n", nome);
}