#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
float calc_Densidade_Populacional(int populacao,float area) {
    float d;
    d = populacao / area;
    return d;
}

float  calc_PIB(float PIB, int populacao) {
    float p;
    p = PIB / populacao;
    return p;
}
int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    char codigo_estado;
    char codigo_cidade;
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;
    float densidade_populacional;
    float PIB_per_capita;
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Insira o código do estado (letras de A a H): \n");
    scanf(" %c", &codigo_estado);
    printf("\nInsira o código da cidade (numeradas de 1 a 4): \n");
    scanf(" %c", &codigo_cidade);
    printf("\nInsira a população da cidade: \n");
    scanf("%i", &populacao);
    printf("\nInsira a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);
    printf("\nInsira o PIB da cidade em R$(reais): \n");
    scanf("%f", &PIB);
    printf("\nInsira o números de pontos turísticos da cidade: \n");
    scanf("%i", &pontos_turisticos);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nO código da carta é %c%c\n", codigo_estado, codigo_cidade);
    printf("A população da cidade é de %i habitante(s)\n", populacao);
    printf("A área da cidade é de %.2f quilômetro(s) quadrado(s)\n", area);
    printf("A cidade possui um PIB de %.2f real(is)\n", PIB);
    printf("A cidade possui %i ponto(s) turístico(s)\n", pontos_turisticos);
    densidade_populacional = calc_Densidade_Populacional(populacao, area);
    printf("A densidade população da cidade é %.2f habitante(s) por quilômetro(s) quadrado(s)\n", densidade_populacional);
    PIB_per_capita = calc_PIB(PIB, populacao);
    printf("O PIB per capita da cidade é %.2f real(is)\n", PIB_per_capita);

    return 0;
}
