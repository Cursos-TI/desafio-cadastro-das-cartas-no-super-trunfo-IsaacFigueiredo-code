#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    char codigo_cidade;
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Insira o código do estado e código da cidade combinado (A1, como exemplo): \n");
    scanf("%c", &codigo_cidade);
    printf("\nInsira a população da cidade: \n");
    scanf("%i", &populacao);
    printf("\nInsira a área da cidade em metros quadrados: \n");
    scanf("%f", &area);
    printf("\nInsira o PIB da cidade em R$(reais): \n");
    scanf("%f", &PIB);
    printf("\nInsira o números de pontos turísticos da cidade: \n");
    scanf("%i", &pontos_turisticos);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("O código da carta é %c\n", codigo_cidade);
    printf("A população da cidade é de %i habitantes\n", populacao);
    printf("A área da cidade é de %f metros quadrados\n", area);
    printf("A cidade possui um PIB de %f reais\n", PIB);
    printf("A cidade possui %i pontos turísticos\n", pontos_turisticos);

    return 0;
}
