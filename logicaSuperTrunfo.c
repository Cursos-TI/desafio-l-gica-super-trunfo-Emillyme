#include <stdio.h>

int main() {
    char estado1[3];
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2[3];
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro das cartas
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A-H): ");
    scanf("%2s", &estado1);

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
    scanf(" %2s", &estado2);

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

    // Declarando aqui os valores pq os valores que eu utilizo para calculo já foram dados ao sistema.
    float densidadePopulacional1 = populacao1 / area1;
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;
    int atributo1, atributo2;

    // Menu de opcoes   
    printf("\nEscolha o primeiro atributo:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - PIB per Capita\n5 - Pontos Turisticos\n6 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    if (atributo1 != 1) printf("1 - Populacao\n");
    if (atributo1 != 2) printf("2 - Area\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - PIB per Capita\n");
    if (atributo1 != 5) printf("5 - Pontos Turisticos\n");
    if (atributo1 != 6) printf("6 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo2);

    if (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 6) {
        printf("Atributo invalido. Reinicie o programa.\n");
        return 1;
    }

    float v1a = (atributo1 == 1) ? populacao1 :
                (atributo1 == 2) ? area1 :
                (atributo1 == 3) ? pib1 :
                (atributo1 == 4) ? pibPerCapita1 :
                (atributo1 == 5) ? pontosTuristicos1 :
                densidadePopulacional1;

    float v2a = (atributo1 == 1) ? populacao2 :
                (atributo1 == 2) ? area2 :
                (atributo1 == 3) ? pib2 :
                (atributo1 == 4) ? pibPerCapita2 :
                (atributo1 == 5) ? pontosTuristicos2 :
                densidadePopulacional2;

    float v1b = (atributo2 == 1) ? populacao1 :
                (atributo2 == 2) ? area1 :
                (atributo2 == 3) ? pib1 :
                (atributo2 == 4) ? pibPerCapita1 :
                (atributo2 == 5) ? pontosTuristicos1 :
                densidadePopulacional1;

    float v2b = (atributo2 == 1) ? populacao2 :
                (atributo2 == 2) ? area2 :
                (atributo2 == 3) ? pib2 :
                (atributo2 == 4) ? pibPerCapita2 :
                (atributo2 == 5) ? pontosTuristicos2 :
                densidadePopulacional2;

    printf("\n--- Comparacao dos Atributos ---\n");

    printf("Atributo 1: ");
    switch(atributo1) {
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("PIB per Capita\n"); break;
        case 5: printf("Pontos Turisticos\n"); break;
        case 6: printf("Densidade Demografica\n"); break;
    }
    printf("%s: %.2f\n%s: %.2f\n", cidade1, v1a, cidade2, v2a);
    printf("Vencedor: %s\n", (atributo1 == 6) ? ((v1a < v2a) ? cidade1 : (v1a > v2a ? cidade2 : "Empate!")) : ((v1a > v2a) ? cidade1 : (v1a < v2a ? cidade2 : "Empate!")));

    printf("\nAtributo 2: ");
    switch(atributo2) {
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("PIB per Capita\n"); break;
        case 5: printf("Pontos Turisticos\n"); break;
        case 6: printf("Densidade Demografica\n"); break;
    }
    printf("%s: %.2f\n%s: %.2f\n", cidade1, v1b, cidade2, v2b);
    printf("Vencedor: %s\n", (atributo2 == 6) ? ((v1b < v2b) ? cidade1 : (v1b > v2b ? cidade2 : "Empate!")) : ((v1b > v2b) ? cidade1 : (v1b < v2b ? cidade2 : "Empate!")));

    float soma1 = v1a + v1b;
    float soma2 = v2a + v2b;

    printf("\n--- Resultado Final ---\n");
    printf("%s: %.2f\n%s: %.2f\n", cidade1, soma1, cidade2, soma2);
    printf("Vencedor da rodada: %s\n", (soma1 > soma2) ? cidade1 : (soma1 < soma2 ? cidade2 : "Empate!"));

    return 0;
}

 // %d: Imprime um inteiro no formato decimal.
    // %i: Equivalente a %d.
    // %f: Imprime um número de ponto flutuante no formato padrão.
    // %e: Imprime um número de ponto flutuante na notação científica.
    // %c: Imprime um único caractere.
    // %s: Imprime uma cadeia (string) de caracteres.
