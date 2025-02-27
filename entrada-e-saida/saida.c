#include <stdio.h>

int main() {
    char nome[21];        
    char sobrenome[21];   
    int idade;
    char areaAtuacao[21];

    printf("Digite seu primeiro nome: \n");
    scanf("%20s", nome);  

    printf("Digite seu sobrenome: \n");
    scanf("%20s", sobrenome); 

    printf("Digite sua idade: \n");
    scanf("%d", &idade);  // Adicionado & antes de idade

    printf("Digite sua area de atuação: \n");
    scanf("%20s", areaAtuacao);

    printf("\n--------------------- FICHA DE CADASTRO ---------------------\n\n");
    printf("   Nome: %s %s\n", nome, sobrenome);
    printf("   Idade: %d\n", idade);
    printf("   Area de Atuação %s\n", areaAtuacao);

    return 0;
}
