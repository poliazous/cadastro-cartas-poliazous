#include <stdio.h>

int main () {
    //declarar variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    
    //novas variáveis para os cálculos
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    //entrada de dados para o primeiro estado
    printf("=== CADASTRO DA CARTA 1 ===\n");
    printf("Digite o nome do primeiro estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo do primeiro estado (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade do primeiro estado (sem espaços): ");
    scanf("%s", cidade1);

    printf("Digite a populacao do primeiro estado: ");
    scanf("%d", &populacao1);

    printf("Digite a area do primeiro estado (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB do primeiro estado (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o numero de pontos turisticos do primeiro estado: ");
    scanf("%d", &pontosTuristicos1);

    //entrada de dados para o segundo estado
    printf("\n=== CADASTRO DA CARTA 2 ===\n");
    printf("Digite o nome do segundo estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo do segundo estado (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade do segundo estado (sem espaços): ");
    scanf("%s", cidade2);

    printf("Digite a populacao do segundo estado: ");
    scanf("%d", &populacao2);

    printf("Digite a area do segundo estado (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB do segundo estado (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o numero de pontos turisticos do segundo estado: ");
    scanf("%d", &pontosTuristicos2);

    //realizar os cálculos
    //densidade populacional = população / área
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    
    //PIB per capita = PIB / população
    pibPerCapita1 = pib1 / populacao1; 
    pibPerCapita2 = pib2 / populacao2;

    //exibir os dados cadastrados
    printf("\n\n=== DADOS DAS CARTAS CADASTRADAS ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f milhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1 * 1000000000);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f milhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2 * 1000000000);

    return 0;
}