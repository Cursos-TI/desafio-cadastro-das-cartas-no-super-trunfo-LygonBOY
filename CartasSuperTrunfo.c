#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4]; 
    char nomeCidade1[50];
    int populacao1;
    int pontosTu1;
    float area1, pib1;

    //Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    int pontosTu2;
    float area2, pib2;

    // Entrada da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTu1);
    printf("Área em KM²: ");
    scanf("%.2f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("\n");

     // Entrada da Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: A02): ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTu2);
    printf("Área em KM²: ");
    scanf("%.2f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("\n");

    // Exibição das Cartas
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Número de pontos turísticos: %d\n", pontosTu1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);

    printf("\n");

    // Exibição das Cartas
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pontosTu2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);

    return 0;
}
