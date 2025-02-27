#include <stdio.h>
 
/*int cadastro(nome, idade, data_nascimento, peso, altura){
    printf("Digite o seu nome: \n");
    scanf("%49s", &nome);

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua data de Nascimento no padrão DD/MM/AAAA\n");
    scanf("%14s", &data_nascimento);

    prinf("Digite o seu peso: \n");
    scanf("%1f", &peso);

    printf("Digite o seu altura\n");
    scanf("%1f", &altura);

    printf("\nNome: %s\nIdade: %d", &nome, &idade);
    return 0;
}
*/

int main() {
    char nome[50];
    int idade;
    char data_nascimento[12];
    float peso;
    double altura;
    char ocupacao[50];
    char escolaridade[50];

    printf("----- FICHA DE CADASTRO ----");

    printf("Digite o seu nome: \n");
    scanf("%c", &nome);

    //printf("Digite sua idade: \n");
    //scanf("%d", &idade);

    //printf("Digite sua data de Nascimento no padrão DD/MM/AAAA\n");
    //scanf("%14s", &data_nascimento);

    //prinf("Digite o seu peso: \n");
    //scanf("%1f", &peso);

    //printf("Digite o seu altura\n");
    //scanf("%1f", &altura);

    printf("\nNome: %s\n", &nome);
    return 0;
};

