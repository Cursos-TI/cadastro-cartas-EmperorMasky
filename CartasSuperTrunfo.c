#include <stdio.h>

typedef struct {
    char nome[30];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_percapita;
    double super_poder;
} Carta;

int main() {
    Carta c1, c2;

    // Entrada dos dados da carta 1
    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %[^\n]", c1.nome);
    printf("Populacao: ");
    scanf("%lu", &c1.populacao);
    printf("Area (km2): ");
    scanf("%f", &c1.area);
    printf("PIB (em bilhoes): ");
    scanf("%f", &c1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &c1.pontos_turisticos);

    // Entrada dos dados da carta 2
    printf("\nDigite o nome da cidade da carta 2: ");
    scanf(" %[^\n]", c2.nome);
    printf("Populacao: ");
    scanf("%lu", &c2.populacao);
    printf("Area (km2): ");
    scanf("%f", &c2.area);
    printf("PIB (em bilhoes): ");
    scanf("%f", &c2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &c2.pontos_turisticos);

    // Cálculos da carta 1
    c1.densidade = c1.populacao / c1.area;
    c1.pib_percapita = (c1.pib * 1000000000.0) / c1.populacao; // PIB convertido para mesma unidade
    c1.super_poder = c1.populacao + c1.area + c1.pib + c1.pontos_turisticos + c1.pib_percapita + (1.0 / c1.densidade);

    // Cálculos da carta 2
    c2.densidade = c2.populacao / c2.area;
    c2.pib_percapita = (c2.pib * 1000000000.0) / c2.populacao;
    c2.super_poder = c2.populacao + c2.area + c2.pib + c2.pontos_turisticos + c2.pib_percapita + (1.0 / c2.densidade);

    printf("\n--- Comparacao das Cartas ---\n");

    // População
    printf("Populacao: Carta 1 venceu (%d)\n", c1.populacao > c2.populacao);

    // Area
    printf("Area: Carta 1 venceu (%d)\n", c1.area > c2.area);

    // PIB
    printf("PIB: Carta 1 venceu (%d)\n", c1.pib > c2.pib);

    // Pontos Turísticos
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", c1.pontos_turisticos > c2.pontos_turisticos);

    // PIB per capita
    printf("PIB per capita: Carta 1 venceu (%d)\n", c1.pib_percapita > c2.pib_percapita);

    // Densidade populacional (vence o menor)
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", c1.densidade < c2.densidade);

    // Super poder
    printf("Super Poder: Carta 1 venceu (%d)\n", c1.super_poder > c2.super_poder);

    return 0;
}
