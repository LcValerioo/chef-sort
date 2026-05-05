#include <stdio.h>
#include <string.h>

#define MAX 20
#define TAM 6

// ANÁLISE DE ALGORITMO - Desafio Chef Sort
// Este é o arquivo inicial para o desafio. 
// Dependendo do nível escolhido (Novato, Aventureiro ou Mestre), 
// descomente e utilize as estruturas e funções correspondentes.

// ====================================================================
// ESTRUTURAS DE DADOS (Para Níveis Aventureiro e Mestre)
// ====================================================================

// Struct para o Nível Aventureiro
/*
typedef struct {
    char nome[50];
    int qtd_ingredientes;
} Prato;
*/

// Struct para o Nível Mestre
/*
typedef struct {
    char nome_prato[50];
    int numero_comanda;
} Comanda;
*/


// ====================================================================
// PROTÓTIPOS DAS FUNÇÕES DE ORDENAÇÃO
// ====================================================================

// Nível Novato: Bubble Sort para strings
// Dica: Use strcmp() da biblioteca <string.h> para comparar strings.
// Dica: Passe ponteiros para contadores de comparações e trocas se quiser alterá-los dentro da função.
// Função para imprimir os ingredientes
void imprimir(char ingredientes[TAM][MAX]){
    for(int i = 0; i < TAM; i++){
        printf("%s\n", ingredientes[i]);
    }
}

// Bubble Sort para strings
void bubbleSort(char ingredientes[TAM][MAX], int *comp, int *trocas){
    int i, j;
    char temp[MAX];
    int trocou;

    for(i = 0; i < TAM - 1; i++){
        trocou = 0;

        for(j = 0; j < TAM - i - 1; j++){
            (*comp)++;

            // strcmp > 0 significa que a string da esquerda é "maior"
            if(strcmp(ingredientes[j], ingredientes[j + 1]) > 0){
                strcpy(temp, ingredientes[j]);
                strcpy(ingredientes[j], ingredientes[j + 1]);
                strcpy(ingredientes[j + 1], temp);

                (*trocas)++;
                trocou = 1;
            }
        }

        if(!trocou)
            break;
    }
}

// Nível Aventureiro: Selection Sort para array de structs (Prato)
/*
void selectionSortPratos(Prato arr[], int n) {
    // Sua lógica do Selection Sort aqui buscando a menor qtd_ingredientes
}
*/

// Nível Mestre: Recursive Insertion Sort para array de structs (Comanda)
// Dica: Lembre-se de definir o "caso base" (n <= 1) para parar a recursão!
/*
void recursiveInsertionSort(Comanda arr[], int n) {
    // Sua lógica do Insertion Sort Recursivo aqui
}
*/


// ====================================================================
// FUNÇÃO PRINCIPAL
// ====================================================================

int main() {
    printf("=== BEM-VINDO AO CHEF SORT ===\n\n");
    printf("Escolha o nivel de dificuldade:\n");
    printf("1. Novato (Organizar a Despensa com Bubble Sort)\n");
    printf("2. Aventureiro (Organizar os Pratos com Selection Sort)\n");
    printf("3. Mestre (Organizar as Comandas com Recursive Insertion Sort)\n");
    printf("0. Sair\n");
    int escolha;
    scanf("%d", &escolha);
    switch (escolha)
    {
    case  1:
    // ÁREA DO NÍVEL NOVATO (Despensa / Bubble Sort)
    //  Cenário: cozinha em caos
    char ingredientes[TAM][MAX] = {
        "Tomate",
        "Cebola",
        "Alho",
        "Cenoura",
        "Batata",
        "Pimentao"
    };

    printf("COZINHA EM CAOS!\n");
    printf("Os ingredientes chegaram desorganizados...\n\n");

    printf("Ingredientes ANTES da ordenacao:\n");
    imprimir(ingredientes);
    printf("\n----------------------------------------------\n");

    int comp = 0, trocas = 0;
    bubbleSort(ingredientes, &comp, &trocas);

    printf("\nIngredientes DEPOIS da ordenacao:\n");
    imprimir(ingredientes);
    printf("\n----------------------------------------------\n");
    
    printf("\nMetricas do algoritmo:\n");
    printf("Comparacoes: %d\n", comp);
    printf("Trocas: %d\n", trocas);


        break;
    case  2:
        // ---------------------------------------------------------
    // ÁREA DO NÍVEL AVENTUREIRO (Pratos / Selection Sort)
    // ---------------------------------------------------------
    /*
    // Inicialize aqui o seu vetor de Pratos
    
    printf("\n--- Nivel Aventureiro: Organizando os Pratos ---\n");
    // Imprima antes, chame a funcao selectionSortPratos, imprima depois
    */


        break;
    case  3:
        /* code */
        break;
    case  0:
        printf("Saindo do Chef Sort. Ate a proxima!\n");
        return 0;
    default:
        printf("Opcao invalida. Tente novamente.\n");
        return 1;
    }
    
    printf("\nObrigado por jogar o Chef Sort! Ate a proxima!\n");

    return 0;
}
