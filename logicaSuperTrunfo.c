#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main(){

// Área para definição das variáveis

    char estado1, estado2;
    char codigocarta1[5], codigocarta2[5];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidadepop1, densidadepop2;
    float pibpercap1, pibpercap2;
    float superPoder1, superPoder2;
    int escolha;

// Criação da Carta 1.
    printf("Vamos criar a Carta 1!\n\n");
        
    printf("Digite a letra do estado. (De 'A' a 'H'): ");
    scanf(" %c", &estado1);

    printf("Digite o código. (Letra do estado + dois números): ");
    scanf("%s", codigocarta1);

    printf("Digite o nome da cidade. (Sem espaços!): ");
    scanf("%s", cidade1);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade. (Em Km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos a cidade tem: ");
    scanf("%d", &pontosturisticos1);

    densidadepop1 = (float)populacao1 / area1;
    pibpercap1 = (float)pib1 / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + (1/densidadepop1) + pibpercap1;

    printf("\nCarta 1 criada com sucesso!\n\n");

// Criação da carta 2.
    printf("Agora vamos criar a Carta 2!\n\n");

    printf("Digite a letra do estado. (De 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("Digite o código. (Letra do estado + dois números): ");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade. (Sem espaços!): ");
    scanf("%s", cidade2);

    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade. (Em Km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos a cidade tem: ");
    scanf("%d", &pontosturisticos2);

    densidadepop2 = (float)populacao2 / area2;
    pibpercap2 = (float)pib2 / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + (1/densidadepop2) + pibpercap2;

    printf("\nCarta 2 criada com sucesso!\n\n");
    printf("==============================\n\n");

// Área para exibição dos dados das cidades

    printf("Aqui está os atributos das duas cartas:\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop1);
    printf("PIB per Capita: %.2f reais\n", pibpercap1);
    printf("Super Poder: %.2f\n\n", superPoder1);
    
    printf("==============================\n\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop2);
    printf("PIB per Capita: %.2f reais\n", pibpercap2);
    printf("Super Poder: %.2f\n\n", superPoder2);

    printf("==============================\n\n");

    //Menu interativo

    printf("Escolha um atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);
    printf("\nOs países na disputa são: %s x %s\n\n", &cidade1, cidade2);

    switch (escolha)
    {
    case 1:
        printf("O atributo da comparação é: População\n");
        printf("Carta 1: %lu x Carta 2: %lu\n", populacao1, populacao2);
        if (populacao1 > populacao2){
            printf("Carta 1 ganhou!\n");
        } else if (populacao2 > populacao1){
            printf("Carta 2 ganhou!\n");
        } else {
            printf("Deu empate!\n");
        }
        break;
    case 2:
        printf("O atributo da comparação é: Área\n");
        printf("Carta 1: %.2f x Carta 2: %.2f\n", area1, area2);
        if (area1 > area2){
            printf("Carta 1 ganhou!\n");
        } else if (area2 > area1){
            printf("Carta 2 ganhou!\n");
        } else {
            printf("Deu empate!\n");
        }
        break;
    case 3:
        printf("O atributo da comparação é: PIB\n");
        printf("Carta 1: %.2f x Carta 2: %.2f\n", pib1, pib2);
        if (pib1 > pib2){
            printf("Carta 1 ganhou!\n");
        } else if (pib2 > pib1){
            printf("Carta 2 ganhou!\n");
        } else {
            printf("Deu empate!\n");
        }
        break;
    case 4:
        printf("O atributo da comparação é: Número de pontos turísticos\n");
        printf("Carta 1: %d x Carta 2: %d\n", pontosturisticos1, pontosturisticos2);
        if (pontosturisticos1 > pontosturisticos2){
            printf("Carta 1 ganhou!\n");
        } else if (pontosturisticos2 > pontosturisticos1){
            printf("Carta 2 ganhou!\n");
        } else {
            printf("Deu empate!\n");
        }
        break;
    case 5:
        printf("O atributo da comparação é: Densidade Populacional\n");
        printf("Carta 1: %.2f x Carta 2: %.2f\n", densidadepop1, densidadepop2);
        if (densidadepop1 < densidadepop2){
            printf("Carta 1 ganhou!\n");
        } else if (densidadepop2 < densidadepop1){
            printf("Carta 2 ganhou!\n");
        } else {
            printf("Deu empate!\n");
        }
        break;
    case 6:
        printf("O atributo da comparação é: PIB per Capta\n");
        printf("Carta 1: %.2f x Carta 2: %.2f\n", pibpercap1, pibpercap2);
        if (pibpercap1 > pibpercap2){
            printf("Carta 1 ganhou!\n");
        } else if (pibpercap2 > pibpercap1){
            printf("Carta 2 ganhou!\n");
        } else {
            printf("Deu empate!\n");
        }
        break;
    case 7:
        printf("O atributo da comparação é: Super Poder\n");
        printf("Carta 1: %.2f x Carta 2: %.2f\n", superPoder1, superPoder2);
        if (superPoder1 > superPoder2){
            printf("Carta 1 ganhou!\n");
        } else if (superPoder2 > superPoder1){
            printf("Carta 2 ganhou!\n");
        } else {
            printf("Deu empate!\n");
        }
        break;
    default:
        printf("Escolha inválida.\n");
        break;
    }

    return 0;
}
