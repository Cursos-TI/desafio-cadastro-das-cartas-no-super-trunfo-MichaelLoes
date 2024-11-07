#include <stdio.h>
#include <string.h>

#define MAX_CIDADES 32  
#define MAX_NOME 50

//estrutura que representa cidade
typedef struct {
    char codigo[4]; 
    char nome[MAX_NOME];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

//funcão para cadastro de cada cidade
void cadastrarCidade(Cidade *cidade) {
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", cidade->codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade->nome);
    printf("Digite a população: ");
    scanf("%d", &cidade->populacao);
    printf("Digite a área (em km²): ");
    scanf("%f", &cidade->area);
    printf("Digite o PIB: ");
    scanf("%f", &cidade->pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cidade->pontos_turisticos);
}

//função para exibir os dados da cidade
void exibirCidade(Cidade cidade) {
    printf("\n--- Dados da Cidade ---\n");
    printf("Código: %s\n", cidade.codigo);
    printf("Nome: %s\n", cidade.nome);
    printf("População: %d\n", cidade.populacao);
    printf("Área: %.2f km²\n", cidade.area);
    printf("PIB: %.2f\n", cidade.pib);
    printf("Pontos Turísticos: %d\n", cidade.pontos_turisticos);
}

int main() {
    Cidade cidades[MAX_CIDADES];
    int i;

    //loop para cadastro das cidades
    for (i = 0; i < MAX_CIDADES; i++) {
        printf("\nCadastro da Cidade %d:\n", i + 1);
        cadastrarCidade(&cidades[i]);
    }

    //exibe todas as cidades cadastradas
    printf("\n--- Cidades Cadastradas ---\n");
    for (i = 0; i < MAX_CIDADES; i++) {
        exibirCidade(cidades[i]);
    }

    return 0;
}
