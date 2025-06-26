#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Atributos das cartas (exemplo com 3 atributos: PIB, População e Densidade)
    float pib1 = 50000, pib2 = 60000;
    float populacao1 = 2.5, populacao2 = 2.0;
    float densidade1 = 120.5, densidade2 = 100.3;

    float valor1_attr1 = 0, valor2_attr1 = 0;
    float valor1_attr2 = 0, valor2_attr2 = 0;
    float soma1 = 0, soma2 = 0;
    int escolha1, escolha2;

    printf("\n=== SUPER TRUNFO FINAL ===\n");
    printf("Carta 1: País A\n");
    printf("Carta 2: País B\n\n");

    printf("Escolha o primeiro atributo:\n");
    printf("1. PIB\n");
    printf("2. População\n");
    printf("3. Densidade Demográfica (vence o menor!)\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);

    // Menu dinâmico para o segundo atributo
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    if (escolha1 != 1) printf("1. PIB\n");
    if (escolha1 != 2) printf("2. População\n");
    if (escolha1 != 3) printf("3. Densidade Demográfica\n");

    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2) {
        printf("\nErro: você escolheu o mesmo atributo duas vezes!\n");
        return 1;
    }

    // Comparação do primeiro atributo
    switch (escolha1) {
        case 1:
            printf("\n[1º Atributo: PIB]\n");
            valor1_attr1 = pib1;
            valor2_attr1 = pib2;
            break;
        case 2:
            printf("\n[1º Atributo: População]\n");
            valor1_attr1 = populacao1;
            valor2_attr1 = populacao2;
            break;
        case 3:
            printf("\n[1º Atributo: Densidade Demográfica]\n");
            valor1_attr1 = densidade1;
            valor2_attr1 = densidade2;
            break;
        default:
            printf("Atributo inválido!\n");
            return 1;
    }

    // Comparação do segundo atributo
    switch (escolha2) {
        case 1:
            printf("[2º Atributo: PIB]\n");
            valor1_attr2 = pib1;
            valor2_attr2 = pib2;
            break;
        case 2:
            printf("[2º Atributo: População]\n");
            valor1_attr2 = populacao1;
            valor2_attr2 = populacao2;
            break;
        case 3:
            printf("[2º Atributo: Densidade Demográfica]\n");
            valor1_attr2 = densidade1;
            valor2_attr2 = densidade2;
            break;
        default:
            printf("Atributo inválido!\n");
            return 1;
    }

    // Exibir valores escolhidos
    printf("\n--- Valores Comparados ---\n");
    printf("País A: %.2f e %.2f\n", valor1_attr1, valor1_attr2);
    printf("País B: %.2f e %.2f\n", valor2_attr1, valor2_attr2);

    // Inversão de lógica para Densidade (menor vence)
    if (escolha1 == 3) {
        soma1 += (valor1_attr1 < valor2_attr1) ? 1 : 0;
        soma2 += (valor2_attr1 < valor1_attr1) ? 1 : 0;
    } else {
        soma1 += (valor1_attr1 > valor2_attr1) ? 1 : 0;
        soma2 += (valor2_attr1 > valor1_attr1) ? 1 : 0;
    }

    if (escolha2 == 3) {
        soma1 += (valor1_attr2 < valor2_attr2) ? 1 : 0;
        soma2 += (valor2_attr2 < valor1_attr2) ? 1 : 0;
    } else {
        soma1 += (valor1_attr2 > valor2_attr2) ? 1 : 0;
        soma2 += (valor2_attr2 > valor1_attr2) ? 1 : 0;
    }

    // Resultado
    printf("\n--- Resultado Final ---\n");
    printf("Pontos País A: %.0f\n", soma1);
    printf("Pontos País B: %.0f\n", soma2);

    if (soma1 > soma2) {
        printf("Vitória do País A!\n");
    } else if (soma2 > soma1) {
        printf("Vitória do País B!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}
