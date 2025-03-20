#include <stdio.h>

int main(){

// Declaração da variaveis para a segunda carta
char estado2;
char codigo2[2];
char nomecidade2[50];
int populacao2;
float area2;
float pib2;
int pontosturisticos2;

// Entrada de dados da segunda carta
printf("Insira dos dados da segunda carta:\n");
printf("Estado (A-H)");
scanf("%c", &estado2);

printf("Código da carta: (ex: A02)");
scanf("%s", codigo2);

printf(" Nome da Cidade:");
scanf("%s", nomecidade2);

printf("População:");
scanf("%d", &populacao2);

printf("Área (em km)");
scanf("%f", &area2);

printf("PIB (Em bilhões de reais:)");
scanf("%f", &pib2);

printf("Número de Pontos Turísticos:");
scanf("%d", &pontosturisticos2);

// Exibição da segunda carta
printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código da carta: %s", codigo2);
printf("Nome da Cidade: %s", nomecidade2);
printf("População: %d", populacao2);
printf("Número de Pontos Turístico: %d", pontosturisticos2);


return 0;

}