#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// -- Constantes Globais --
#define TAM_STRING 50
#define MAX_LIVROS 100

//-- Definição da Estrutura (Struct) --
struct Livro {
    char nome[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao;
};

// -- Funcao para limpar o buffer de entrada --
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// -- Funcao principal --
int main() {
    struct Livro biblioteca[MAX_LIVROS];
    int totalLivros = 0;
    int opcao;

    // -- Laco principal do menu --
    do {
        printf("\n--- Menu ---\n");
        printf("1. Adicionar Livro\n");
        printf("2. Listar Livros\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");   
        
        scanf("%d", &opcao);
        limparBuffer(); // Limpa o buffer de entrada apos ler a opcao

        // -- Processamento das opcoes do menu --
        switch (opcao) {
            case 1:
                if (totalLivros < MAX_LIVROS) {
                    printf("Digite o nome do livro: ");
                    fgets(biblioteca[totalLivros].nome, TAM_STRING, stdin);
                    biblioteca[totalLivros].nome[strcspn(biblioteca[totalLivros].nome, "\n")] = '\0'; // Remove o newline

                    printf("Digite o autor do livro: ");
                    fgets(biblioteca[totalLivros].autor, TAM_STRING, stdin);
                    biblioteca[totalLivros].autor[strcspn(biblioteca[totalLivros].autor, "\n")] = '\0'; // Remove o newline

                    printf("Digite a editora do livro: ");
                    fgets(biblioteca[totalLivros].editora, TAM_STRING, stdin);
                    biblioteca[totalLivros].editora[strcspn(biblioteca[totalLivros].editora, "\n")] = '\0'; // Remove o newline

                    printf("Digite a edicao do livro: ");
                    scanf("%d", &biblioteca[totalLivros].edicao);
                    limparBuffer(); // Limpa o buffer de entrada apos ler a edicao

                    totalLivros++;
                    printf("Livro adicionado com sucesso!\n");
                } else {
                    printf("Limite de livros atingido!\n");
                }
                break; // <-- Break adicionado aqui para nao vazar para o case 2

            case 2:
                if (totalLivros > 0) {
                    printf("\n--- Lista de Livros ---\n");
                    for (int i = 0; i < totalLivros; i++) {
                        printf("Livro %d:\n", i + 1);
                        printf("Nome: %s\n", biblioteca[i].nome);
                        printf("Autor: %s\n", biblioteca[i].autor);
                        printf("Editora: %s\n", biblioteca[i].editora);
                        printf("Edicao: %d\n", biblioteca[i].edicao);
                        printf("-----------------------\n");
                    }
                } else {
                    printf("Nenhum livro cadastrado!\n");
                }
                break;        
            
            case 3:
                printf("Saindo do programa...\n");
                break;
            
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    } while (opcao != 3);    

    return 0;
} // <-- Chave que fecha a funcao main adicionada aqui