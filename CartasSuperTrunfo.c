#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
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
    // Variáveis separadas para cada atributo da cidade.
    char codigo_estado;
    char codigo_cidade;
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;
    float densidade_populacional;
    float PIB_per_capita;
    int i;
    float somatorio [i];
    float somatorio_1;
    float somatorio_2;
    int c = 0;
    float propriedades_carta_1[6];
    float propriedades_carta_2[6];
    
    // Cadastro das Cartas:
    // Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf ("\nVocê precisa de criar apenas duas cartas para serem comparadas!!\n");

    // Estrutura "for" usada para repetir o código de criação de cartas
    for (i = 0; i <= 1; i++) {
        printf("\nInsira o código do estado (letras de A a H): \n");
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
        // Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
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

        // Chama função de somatório de propriedades da carta atual
        somatorio [i] = (float)populacao+area+PIB+(float)pontos_turisticos+PIB_per_capita-densidade_populacional;

        // Inserir valor de somatório de propriedades e valores de propriedades específicas, na primeira e segunda carta
        if (i==0)
        {
            somatorio_1 = somatorio[i];
            propriedades_carta_1[0] = populacao;
            propriedades_carta_1[1] = area;
            propriedades_carta_1[2] = PIB;
            propriedades_carta_1[3] = pontos_turisticos;
            propriedades_carta_1[4] = PIB_per_capita;
            propriedades_carta_1[5] = densidade_populacional;
        }

        else
        {
            somatorio_2 = somatorio[i];
            propriedades_carta_2[0] = populacao;
            propriedades_carta_2[1] = area;
            propriedades_carta_2[2] = PIB;
            propriedades_carta_2[3] = pontos_turisticos;
            propriedades_carta_2[4] = PIB_per_capita;
            propriedades_carta_2[5] = densidade_populacional;
        }

    }

    printf("\nTodas as cartas do jogo foram adicionadas!\n");

    // Exibe comparação de valores de propriedades das duas cartas
    printf("\n A população da primeira carta é %f e da segunda carta é %f, ", propriedades_carta_1[0], propriedades_carta_2[0]);
    if (propriedades_carta_1[0] == propriedades_carta_2[0]){
        printf("portanto temos um empate!");
    } else{
        propriedades_carta_1[0] > propriedades_carta_2 [0]? printf ("portanto a primeira carta vence com maior população!"): printf("portanto a segunda carta vence com maior população!");
    }

    printf("\n A área da primeira carta é %.2f e da segunda carta é %.2f, ", propriedades_carta_1[1], propriedades_carta_2[1]);
    if (propriedades_carta_1[1] == propriedades_carta_2[1]){
        printf("portanto temos um empate!");
    } else{
        propriedades_carta_1[1] > propriedades_carta_2 [1]? printf ("portanto a primeira carta vence com maior área!"): printf("portanto a segunda carta vence com maior área!");
    }

    printf("\n O PIB da primeira carta é %.2f e da segunda carta é %.2f, ", propriedades_carta_1[2], propriedades_carta_2[2]);
    if (propriedades_carta_1[2] == propriedades_carta_2[2]){
        printf("portanto temos um empate!");
    } else{
        propriedades_carta_1[2] > propriedades_carta_2 [2]? printf ("portanto a primeira carta vence com maior PIB!"): printf("portanto a segunda carta vence com maior PIB!");
    }

    printf("\n A cidade da primeira carta tem %f pontos turísticos e da segunda carta tem %f pontos turísticos, ", propriedades_carta_1[3], propriedades_carta_2[3]);
    if (propriedades_carta_1[3] == propriedades_carta_2[3]){
        printf("portanto temos um empate!");
    } else{
    propriedades_carta_1[3] > propriedades_carta_2 [3]? printf ("portanto a primeira carta vence com maior número de pontos turísticos!"): printf("portanto a segunda carta vence com maior número de pontos turísticos!");
    }

    printf("\n O PIB per capita da primeira carta é %.2f e da segunda carta é %.2f, ", propriedades_carta_1[4], propriedades_carta_2[4]);
    if (propriedades_carta_1[4] == propriedades_carta_2[4]){
        printf("portanto temos um empate!");
    } else{
    propriedades_carta_1[4] > propriedades_carta_2 [4]? printf ("portanto a primeira carta vence com maior PIB per capita!"): printf("portanto a segunda carta vence com maior PIB per capita!");
    }
    
    printf("\n A densidade populacional da primeira carta é %.2f e da segunda carta é %.2f, ", propriedades_carta_1[5], propriedades_carta_2[5]);
    if (propriedades_carta_1[5] == propriedades_carta_2[5]){
        printf("portanto temos um empate!");
    } else{
    propriedades_carta_1[5] < propriedades_carta_2 [5]? printf ("portanto a primeira carta vence com menor densidade populacional!\n"): printf("portanto a segunda carta vence com menor densidade populacional!\n");
    }

    // Exibe valor da soma de propriedades das duas cartas
    printf ("\nO valor das somas de pontos da primeira carta é %.2f e o valor das somas da segunda carta é %.2f!", somatorio_1, somatorio_2);

return 0;
}
