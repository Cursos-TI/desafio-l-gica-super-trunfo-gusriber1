#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main(){

// Área para definição das variáveis para armazenar as propriedades das cidades

    char estado1, estado2;
    char codigocarta1[5], codigocarta2[5];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

// Criação da Carta 1.
    printf("Vamos criar a Carta 1!\n\nDigite a letra do estado. (De 'A' a 'H'): ");
    scanf(" %c", &estado1);

    printf("Digite o código. (Letra do estado + dois números): ");
    scanf("%s", codigocarta1);

    printf("Digite o nome da cidade. (Sem espaços!): ");
    scanf("%s", cidade1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade. (Em Km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos a cidade tem: ");
    scanf("%d", &pontosturisticos1);

// Criação da carta 2.

    printf("\nCarta 1 criada com sucesso!\n\nAgora vamos criar a Carta 2!\n\n");

    printf("Digite a letra do estado. (De 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("Digite o código. (Letra do estado + dois números): ");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade. (Sem espaços!): ");
    scanf("%s", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade. (Em Km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos a cidade tem: ");
    scanf("%d", &pontosturisticos2);

    printf("\nCarta 2 criada com sucesso!\n\n==============================\n\nAqui está os atributos das duas cartas:\n\n");

// Área para exibição dos dados das cidades

    printf("Carta 1:\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.3f\nPIB: %.3f\nNúmero de pontos turísticos: %d\n\n", estado1, codigocarta1, cidade1, populacao1, area1, pib1, pontosturisticos1);
    printf("==============================\n\n");
    printf("Carta 2:\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.3f\nPIB: %.3f\nNúmero de pontos turísticos: %d\n\n", estado2, codigocarta2, cidade2, populacao2, area2, pib2, pontosturisticos2);
    printf("==============================\n\n");

//Exibição do resultado

    printf("O atributo dessa batalha é: População\n\n");

    if (populacao1 > populacao2)
    {
        printf("A população da Cidade 1 é maior!\n\nA cidade vencedora é: %s\n\n", cidade1);
    } else {
        printf("A população da Cidade 2 é maior!\n\nA cidade vencedora é: %s\n\n", cidade2);
    }
    
    return 0;

}
