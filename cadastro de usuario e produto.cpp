#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro {
    char nome[50];
    int idade;
    char rua[50];
    int numero;
    char nome_produto[50];
    int quantidade;
    float preco_unitario;
};

int main() {
    struct cadastro c;

    printf("***********************\n");
    printf("CADASTRO DE USUARIO\n");
    printf("***********************\n");

    printf("Digite seu nome: ");
    fgets(c.nome, 50, stdin);
    c.nome[strcspn(c.nome, "\n")] = '\0';

    printf("Digite sua idade: ");
    scanf("%d", &c.idade);
    getchar(); // limpa o buffer de entrada

    printf("Entre com o nome da sua rua: ");
    fgets(c.rua, 50, stdin);
    c.rua[strcspn(c.rua, "\n")] = '\0';

    printf("Entre com o número da casa: ");
    scanf("%d", &c.numero);
    getchar(); // limpa o buffer de entrada

    printf("***********************\n");
    printf("CADASTRO DE PRODUTO\n");
    printf("***********************\n");

    printf("Digite o nome do produto: ");
    fgets(c.nome_produto, 50, stdin);
    c.nome_produto[strcspn(c.nome_produto, "\n")] = '\0';

    printf("Digite a quantidade em estoque: ");
    scanf("%d", &c.quantidade);
    getchar(); // limpa o buffer de entrada

    printf("Digite o preço unitário: ");
    scanf("%f", &c.preco_unitario);
    getchar(); // limpa o buffer de entrada

    printf("\n----- DADOS DO USUÁRIO -----\n");
    printf("Nome: %s\nIdade: %d\nRua: %s\nNumero: %d\n", c.nome, c.idade, c.rua, c.numero);
    printf("\n----- DADOS DO PRODUTO -----\n");
    printf("Nome: %s\nQuantidade: %d\nPreço unitário: R$%.2f\n", c.nome_produto, c.quantidade, c.preco_unitario);

    return 0;
}
