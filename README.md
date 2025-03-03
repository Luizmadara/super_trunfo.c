#include <stdio.h>

int main() {

    char estado1[30], estado2[30];
    char cidade1[500], cidade2[500];
    char codigo1[50], codigo2[50];

    int populacao1, populacao2;
    int ptsturisticos1, ptsturisticos2;

    float area1, area2, pib1, pib2;

    printf("*** BEM VINDO AO JOGO SUPER TRUNFO! ***\n");
    printf("Para começar insira os dados da primeira carta. \n");

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite seu estado: ");
    scanf(" %[^\n]", estado1);  // Corrigido para capturar string com espaços

    printf("Digite sua cidade: ");
    scanf(" %[^\n]", cidade1);  // Corrigido para capturar string com espaços

    printf("Digite sua População: ");
    scanf(" %d", &populacao1);

    printf("Quantos pontos turísticos: ");
    scanf("%d", &ptsturisticos1);

    printf("Digite sua Área (em km²): ");
    scanf(" %f", &area1);

    printf("Digite seu PIB (em milhoes): ");
    scanf(" %f", &pib1);

    printf("\nDigite os dados da segunda carta\n");

    printf("Digite o código da carta: ");
    scanf(" %s", codigo2);

    printf("Digite seu estado: ");
    scanf(" %[^\n]", estado2);  // Corrigido para capturar string com espaços

    printf("Digite sua cidade: ");
    scanf(" %[^\n]", cidade2);  // Corrigido para capturar string com espaços

    printf("Digite sua População: ");
    scanf(" %d", &populacao2);

    printf("Quantos pontos turísticos: ");
    scanf(" %d", &ptsturisticos2);

    printf("Digite sua Área (em km²): ");
    scanf(" %f", &area2);

    printf("Digite seu PIB (em  milhoes): ");
    scanf(" %f", &pib2);

    printf("\n*** Dados da Primeira Carta ***\n");
    printf("Código: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Pontos Turísticos: %d\n", ptsturisticos1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhoes\n", pib1);

    float densidade1 = (float)populacao1 / area1;
    float percapita1 = pib1 / populacao1;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB Per Capita: %.2f milhoes por habitante\n", percapita1);

    printf("\n*** Dados da Segunda Carta ***\n");
    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Pontos Turísticos: %d\n", ptsturisticos2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhoes\n", pib2);

    float densidade2 = (float)populacao2 / area2;
    float percapita2 = pib2 / populacao2;
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB Per Capita: %.2f milhoes por habitante\n", percapita2);

    return 0;
}
