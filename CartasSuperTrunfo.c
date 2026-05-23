#include <stdio.h>// Para entrada e saída de dados (printf e scanf)

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main () {
    //declarar variáveis
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    //entrada de dados para o primeiro estado
    printf("=== CADASTRO DA CARTA 1 ===\n");
    printf("Digite o nome do primeiro estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código do primeiro estado (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade do primeiro estado: ");
    scanf("%s", cidade1);

    printf("Digite a população do primeiro estado: ");
    scanf("%d", &populacao1);

    printf("Digite a área do primeiro estado (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB do primeiro estado (em milhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos do primeiro estado: ");
    scanf("%d", &pontosTuristicos1);

    //entrada de dados para o segundo estado
    printf("\n=== CADASTRO DA CARTA 2 ===\n");
    printf("Digite o nome do segundo estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código do segundo estado (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade do segundo estado: ");
    scanf("%s", cidade2);

    printf("Digite a população do segundo estado: ");
    scanf("%d", &populacao2);

    printf("Digite a área do segundo estado (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB do segundo estado (em milhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos do segundo estado: ");
    scanf("%d", &pontosTuristicos2);

    //exibir os dados cadastrados
    printf("\n\n=== DADOS DAS CARTAS CADASTRADAS ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0; // Indica que o programa terminou com sucesso
}
