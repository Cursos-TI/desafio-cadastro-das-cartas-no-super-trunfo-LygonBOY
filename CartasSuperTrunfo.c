#include <stdio.h>

int main() {
    char estado1[50], cidade1[50];
    int codigo1, populacao1, pontos1;
    float area1, pib1, densidade1, pibPerCapita1;

    char estado2[50], cidade2[50];
    int codigo2, populacao2, pontos2;
    float area2, pib2, densidade2, pibPerCapita2;

    // Leitura da primeira carta
    printf("Estado (1): ");
    scanf(" %[^\n]", estado1);
    printf("Código da carta (1): ");
    scanf("%d", &codigo1);
    printf("Cidade (1): ");
    scanf(" %[^\n]", cidade1);
    printf("População (1): ");
    scanf("%d", &populacao1);
    printf("Área (1): ");
    scanf("%f", &area1);
    printf("PIB em milhões (1): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos (1): ");
    scanf("%d", &pontos1);

    // Cálculos da primeira carta
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Leitura da segunda carta
    printf("\nEstado (2): ");
    scanf(" %[^\n]", estado2);
    printf("Código da carta (2): ");
    scanf("%d", &codigo2);
    printf("Cidade (2): ");
    scanf(" %[^\n]", cidade2);
    printf("População (2): ");
    scanf("%d", &populacao2);
    printf("Área (2): ");
    scanf("%f", &area2);
    printf("PIB em milhões (2): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos (2): ");
    scanf("%d", &pontos2);

    // Cálculos da segunda carta
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição dos resultados
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\nCidade: %s\nCódigo: %d\n", estado1, cidade1, codigo1);
    printf("População: %d\nÁrea: %.2f km²\nPIB: R$ %.2f milhões\n", populacao1, area1, pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\nCidade: %s\nCódigo: %d\n", estado2, cidade2, codigo2);
    printf("População: %d\nÁrea: %.2f km²\nPIB: R$ %.2f milhões\n", populacao2, area2, pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}
