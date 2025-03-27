# Introdução a computação com C
Repositorio para estudos da base de computação ultilizando a linguagem C

## Anotações
- C é uma linguagem estaticamente tipada. Isso quer dizer que os tipos precisam ser explicitamente declaraos e que não mudam.
- Linguagem compilada -> transforma o codigo diretamente em codigo de maquina, tornando rapido e otimizado alem de leve

## Cabeçalho de um programa em C
````C
#include <stdio.h> //biblioteca padrão de entrada e saida do C
````

- `#Include` importa bibliotecas,
- `<stdio.h>` biblioteca de entrada e saida do sistema
## Corpo de um programa em C
````C
// função que executa o programa
int main(){
    printf("Hello World!\n"); // função que imprime texto na saida do console
    return 0; // diz para o compilador que tudo foi executado da forma correta
};
````
- `ìnt main(){}` -> define a função principal que vai ser rodada no sistema
- `printf()` -> função da lib <stdio.h> que imprime texto na saida do console.
- `\n` -> quebra de linha
- `return 0`; -> indica para o compilador que o sistema deu certo
## Variaveis
- Variaveis são caixas onde guardamos valores
- As variaveis em C precisam ter explicitamente um tipo e um nome

### Tipos em C
#### Valores inteiros
- char -> caracteres isolados da tabela ASCII
- int -> valores inteiros
- short -> 
- long -> 
#### Numeros de ponto flutuante
- float -> valores reais (ponto flutuante)
- double -> valores reais precisos (ponto flutuante)
- long double -> 

- char[] -> strings (provavelmente isso se enquadra como um objeto ou array)

## Entrada e saida
---
### Entrada: ``printf()``
````C
printf("Texto %especificador de formato \n", variaveis);
printf("Nome: %s %s\nIdade: %i\nData de Nascimento %s\nPeso: %.1f\nAltura: %.2f", nome, sobrenome, idade, dataNascimento, peso, altura);
````
ESPECIFICADORES DE FORMATO`<br>
- `%d` = Imprime um inteiro em formato decimal
- `%i` = Equivalente a %d
- `%f` = imprime um número de ponto flutuante no formato padrão
- `%e` = Imprime um número de ponto flutuante em notação cientifica
- `%c` = imprime um unico caratere
- `%s` = imprime uma cadeia (string) de caracteres

| Tipo | Especificador | 
| --- | --- | 
| int | `%d`,`%i` | 
| float, double | `%f`, `%e` | 
| char | `%c`, `s` | 
  
# Referencias
- [FreeCodeCamp - Manual de C](https://www.freecodecamp.org/portuguese/news/o-manual-do-iniciante-em-c-aprenda-o-basico-sobre-a-linguagem-de-programacao-c-em-apenas-algumas-horas/)