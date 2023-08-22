#include <stdio.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

int main() {
   
    struct Pessoa pessoa1;

    printf("Digite o nome: ");
    scanf("%s", pessoa1.nome);

    printf("Digite a idade: ");
    scanf("%d", &pessoa1.idade);

    printf("Digite a altura: ");
    scanf("%f", &pessoa1.altura);

    printf("\nDados da Pessoa:\n");
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Altura: %.2f\n", pessoa1.altura);

    return 0;
}
