#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codCidade, populacao, numPontosTuristicos;
    char nome[20];
    float area, pib;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o Nome da cidade: ");
    scanf(" Nome: %s", &nome);
    scanf(" Cod da Cidade: %d", &codCidade);
    scanf(" Populacao: %d", &populacao);
    scanf(" Area: %f", &area);
    scanf(" Pib: %f", &pib);
    scanf(" Numero de Pontos Turisticos: %d", &numPontosTuristicos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("- Nome: %s \n- Cod da Cidade: %d \n- Populacao: %d \n- Area: %f \n- Pib: %f \n- Numero de Pontos Turisticos: %d\n", nome, codCidade, populacao, area, pib, numPontosTuristicos);
    return 0;
}
