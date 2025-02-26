# introduction-to-C-Computing
Repositorio para estudos da base de computação ultilizando a linguagem C

## Conceitos basicos
### Cabeçalho de um programa em C
````C
#include <stdio.h> //biblioteca padrão de entrada e saida do C
````

- `#Include` importa bibliotecas,
- `<stdio.h>` biblioteca de entrada e saida do sistema
### Corpo de um programa em C
````C
// função que executa o programa
int main(){
    printf("Hello World!\n"); // função que imprime texto na saida do console
    return 0; // diz para o compilador que tudo foi executado da forma correta
};
````