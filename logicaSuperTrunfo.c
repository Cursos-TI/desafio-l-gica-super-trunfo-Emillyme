#include <stdio.h>

int main() {
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro das cartas
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);


    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhoes de reais: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);


    float densidadePopulacional1 = populacao1 / area1;
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;

    // Menu de opcoes   
    int opcao;
    printf("\n=== Escolha o atributo para comparar ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - PIB per Capita\n");
    printf("5 - Numero de Pontos Turisticos\n");
    printf("6 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n--- Comparacao ---\n");

    switch(opcao) {
        case 1:
            printf("Atributo: Populacao\n");
            printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
            printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
            if(populacao1 > populacao2)
                printf("Resultado: Carta 1 vence!\n");
            else if(populacao1 < populacao2)
                printf("Resultado: Carta 2 vence!\n");
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("Atributo: Area\n");
            printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
            printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
            if(area1 > area2)
                printf("Resultado: Carta 1 vence!\n");
            else if(area1 < area2)
                printf("Resultado: Carta 2 vence!\n");
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("Carta 1 - %s: %.2f bilhoes\n", cidade1, pib1);
            printf("Carta 2 - %s: %.2f bilhoes\n", cidade2, pib2);
            if(pib1 > pib2)
                printf("Resultado: Carta 1 vence!\n");
            else if(pib1 < pib2)
                printf("Resultado: Carta 2 vence!\n");
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("Atributo: PIB per Capita\n");
            printf("Carta 1 - %s: %.2f\n", cidade1, pibPerCapita1);
            printf("Carta 2 - %s: %.2f\n", cidade2, pibPerCapita2);
            if(pibPerCapita1 > pibPerCapita2)
                printf("Resultado: Carta 1 vence!\n");
            else if(pibPerCapita1 < pibPerCapita2)
                printf("Resultado: Carta 2 vence!\n");
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("Atributo: Numero de Pontos Turisticos\n");
            printf("Carta 1 - %s: %d\n", cidade1, pontosTuristicos1);
            printf("Carta 2 - %s: %d\n", cidade2, pontosTuristicos2);
            if(pontosTuristicos1 > pontosTuristicos2)
                printf("Resultado: Carta 1 vence!\n");
            else if(pontosTuristicos1 < pontosTuristicos2)
                printf("Resultado: Carta 2 vence!\n");
            else
                printf("Empate!\n");
            break;
        case 6:
            printf("Atributo: Densidade Demografica\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidadePopulacional1);
            printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidadePopulacional2);
            if(densidadePopulacional1 < densidadePopulacional2)
                printf("Resultado: Carta 1 vence!\n");
            else if(densidadePopulacional1 > densidadePopulacional2)
                printf("Resultado: Carta 2 vence!\n");
            else
                printf("Empate!\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
