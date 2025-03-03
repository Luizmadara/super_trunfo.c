#include <stdio.h>

int main (){

char estado1[30], estado2[30];
char cidade1[500], cidade2[500];
char codigo1[50], codigo2[50];

int populacao1, populacao2;
int ptsturisticos1, ptsturisticos2;

float area1, area2, pib1, pib2;

printf("*** BEM VINDO AO JOGO SUPER TRUNFO! ***\n");
printf("Para começar insira os dados da primeira carta. \n");

printf("Digite o codigo da carta: \n");
scanf(" %s", codigo1);

printf("Digite seu estado: \n");
scanf(" %s", estado1);

printf("Digite sua cidade: \n");
scanf(" %s", cidade1);

printf("Digite sua Populacao: \n");
scanf(" %d", &populacao1);

printf("Quantos pontos turisticos: \n");
scanf(" %d", &ptsturisticos1);

printf("Digite sua Area: \n");
scanf(" %f", &area1);

printf("Digite seu Pib: \n");
scanf(" %f", &pib1);

printf("Digite os dados da segunda carta\n");

printf("Digite o codigo da carta: \n");
scanf(" %s", codigo2);

printf("Digite seu estado: \n");
scanf(" %s", estado2);

printf("Digite sua cidade: \n");
scanf(" %s", cidade2);

printf("Digite sua Populacao: \n");
scanf(" %d", &populacao2);

printf("Quantos pontos turisticos: \n");
scanf(" %d", &ptsturisticos2);

printf("Digite sua area: \n");
scanf(" %f", &area2);

printf("Digite seu pib: \n");
scanf(" %f", &pib2);



printf("Os dados da primeira carta sao:\n");

printf(" O codigo e: %s \n", codigo1);

printf(" O nome do estado e: %s \n", estado1);

printf(" O nome da cidade e: %s \n", cidade1);

printf(" A quantidade da populacao e: %d \n", populacao1);

printf(" A quantidade de pontos turisticos e: %d \n", ptsturisticos1);

printf("Sua area e: %.2f km²\n", area1);

printf("Seu pib e: %f.2f \n", pib1);

printf("Os dados da segunda carta sao: \n");

printf(" O codigo e: %s \n", codigo2);

printf(" O nome do estado e : %s \n", estado2);

printf(" O nome da cidade e: %s \n", cidade2);

printf(" A quantidade da populacao e: %d \n", populacao2);

printf(" A quantidade de pontos turisticos e: %d \n", ptsturisticos2);

printf("Sua area e: %.2f km²\n", area2);

printf("Seu pib e: %f.2f \n", pib2);


}
