#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char estado1[50], cidade1[50];
    int codigo1, pontos1;
    float area1, pib1, densidade1, pibPerCapita1;
    unsigned long int populacao1;

    int opcao, regras, jogar;

    char estado2[50], cidade2[50];
    int codigo2, pontos2;
    float area2, pib2, densidade2, pibPerCapita2;
    unsigned long int populacao2;

    float superPoder1, superPoder2;

    // Leitura da primeira carta
    printf("Estado (1): ");
    scanf(" %[^\n]", estado1);
    printf("Código da carta (1): ");
    scanf("%d", &codigo1);
    printf("Cidade (1): ");
    scanf(" %[^\n]", cidade1);
    printf("População (1): ");
    scanf("%lu", &populacao1);
    printf("Área (1): ");
    scanf("%f", &area1);
    printf("PIB em milhões (1): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos (1): ");
    scanf("%d", &pontos1);

    // Cálculos da primeira carta
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + densidade1;

    // Leitura da segunda carta
    printf("\nEstado (2): ");
    scanf(" %[^\n]", estado2);
    printf("Código da carta (2): ");
    scanf("%d", &codigo2);
    printf("Cidade (2): ");
    scanf(" %[^\n]", cidade2);
    printf("População (2): ");
    scanf("%lu", &populacao2);
    printf("Área (2): ");
    scanf("%f", &area2);
    printf("PIB em milhões (2): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos (2): ");
    scanf("%d", &pontos2);

    // Cálculos da segunda carta
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + densidade2;

    // Exibição dos resultados
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\nCidade: %s\nCódigo: %d\n", estado1, cidade1, codigo1);
    printf("População: %lu\nÁrea: %.2f km²\nPIB: R$ %.2f milhões\n", populacao1, area1, pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);
    printf("Super poder: %.2f\n", superPoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\nCidade: %s\nCódigo: %d\n", estado2, cidade2, codigo2);
    printf("População: %lu\nÁrea: %.2f km²\nPIB: R$ %.2f milhões\n", populacao2, area2, pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);
    printf("Super poder: %.2f\n", superPoder2);

    printf("\nComparação de cartas:\n\n");
    printf("População: carta 1 venceu! (%d)\n", populacao1 > populacao2);
    printf("Área: carta 1 venceu! (%d)\n", area1 > area2);
    printf("PIB: carta 1 venceu! (%d)\n", pib1 > pib2);
    printf("Pontos turísticos: carta 1 venceu! (%d)\n", pontos1 > pontos2);
    printf("Densidade populacional: carta 1 venceu! (%d)\n", densidade1 > densidade2);
    printf("PIB per Capita: carta 1 venceu! (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super poder: carta 1 venceu! (%d)\n\n", superPoder1 > superPoder2);

    //MENU INTERATIVO
    printf("Menu principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair do jogo\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("*** Escolha uma opção para comparar: ***\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade demográfica\n");
        scanf("%d", &jogar);

    //CASE PARA AS REGRAS
    case 2:
        printf("*** REGRAS ***\n");
        printf("- Cada carta representa uma cidade com seus dados.\n");
        printf("- O jogador escolhe um atributo para comparar.\n");
        printf("- Vence quem tiver o maior valor, exceto na densidade, onde vence o menor.\n");
    break;

    //SAINDO DO JOGO
    case 3:
        printf("Saindo do jogo...\n");
    
    //OPÇÃO INEXISTENTE
    default:
        printf("OPÇÃO INVÁLIDA!\n");
        break;
    }

    
    //INICIANDO O JOGO
    switch (jogar)
    {
    
            //COMPARAÇÃO DAS POPULAÇÕES
    case 1:
        if (populacao1 > populacao2)
        {
            printf("Carta 1 - %s (%s): %lu habitantes\n", cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %lu habitantes\n", cidade2, estado2, populacao2);
            printf("População da Carta 1 venceu!: %lu contra %lu\n", populacao1, populacao2);
        }
        else if (populacao2 > populacao1)
        {
            printf("Carta 1 - %s (%s): %lu habitantes\n", cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %lu habitantes\n", cidade2, estado2, populacao2);
            printf("Populacão da Carta 2 venceu!: %lu contra %lu\n", populacao2, populacao1);
        }
        else
        {
            printf("Ambas as cartas possuem a mesma população!\n");
            printf("Carta 1 - %s (%s): %lu habitantes\n", cidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %lu habitantes\n", cidade2, estado2, populacao2);
        }
    break;

        
    //COMPARAÇÃO DAS ÁREAS
    case 2:
        if (area1 > area2)
        {
            printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);
            printf("Carta 1 venceu!: %.2f km²\n", area1);
        }
        else if (area2 > area1)
        {
            printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);
            printf("Carta 2 venceu!: %.2f km²\n", area2);
        }
        else
        {
            printf("Ambas as cartas possuem a mesma área!\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);
        }
    break;

    //COMPARAÇÃO DO PIB
    case 3:
        if (pib1 > pib2)
        {
            printf("Carta 1 - %s (%s): R$ %.2f\n", cidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): R$ %.2f\n", cidade2, estado2, pib2);
            printf("Carta 1 venceu!: R$ %.2f\n", pib1);
        }
        else if (pib2 > pib1)
        {
            printf("Carta 1 - %s (%s): R$ %.2f\n", cidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): R$ %.2f\n", cidade2, estado2, pib2);
            printf("Carta 2 venceu!: R$ %.2f\n", pib2);
        }
        else
        {
            printf("Ambas as cartas possuem o mesmo PIB!\n");
            printf("Carta 1 - %s (%s): R$ %.2f\n", cidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): R$ %.2f\n", cidade2, estado2, pib2);
        }
    break;

    //COMPARAÇÃO DOS PONTOS TURÍSTICOS
    case 4:
        if (pontos1 > pontos2)
        {
            printf("Carta 1 - %s (%s): %d pontos turísticos\n", cidade1, estado1, pontos1);
            printf("Carta 2 - %s (%s): %d pontos turísticos\n", cidade2, estado2, pontos2);
            printf("Carta 1 venceu!: %d pontos turísticos\n", pontos1);
        }
        else if (pib2 > pib1)
        {
            printf("Carta 1 - %s (%s): %d pontos turísticos\n", cidade1, estado1, pontos1);
            printf("Carta 2 - %s (%s): %d pontos turísticos\n", cidade2, estado2, pontos2);
            printf("Carta 2 venceu!: %d pontos turísticos\n", pontos2);
        }
        else
        {
            printf("Ambas as cartas possuem a mesma quantidade de PONTOS TURÍSTICOS!\n");
            printf("Carta 1 - %s (%s): %d pontos turísticos\n", cidade1, estado1, pontos1);
            printf("Carta 2 - %s (%s): %d pontos turísticos\n", cidade2, estado2, pontos2);
        }
    break;

    //COMPARAÇÃO DA DENSIDADE DEMOGRÁFICA
    case 5:
        if (densidade1 > densidade2)
        {
            printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, densidade2);
            printf("Carta 1 venceu!: %.2f hab/km²\n", densidade1);
        }
        else if (pib2 > pib1)
        {
            printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, densidade2);
            printf("Carta 2 venceu!: %.2f hab/km²\n", densidade2);
        }
        else
        {
            printf("Ambas as cartas possuem a mesma DENSIDADE DEMOGRÁFICA!\n");
            printf("Carta 1 - %s (%s): %.2f hab/km²\n", cidade1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", cidade2, estado2, densidade2);
        }
    break;
    
    }

    return 0;
}
