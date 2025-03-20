#include <stdio.h>

int main(){
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[1];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // Entrada de dados da primeira carta
    printf("Insira os dados da primeira carta:\n");
    printf("Estado (A-H):");
    scanf("%c", &estado1);

    printf("Código da Carta (ex: A01):");
    scanf("%s", codigo1);

    printf("Nome da Cidade:");
    scanf("%s", nomecidade1);

    printf("População:");
    scanf("%d", &populacao1);

    printf("Área (em km²):");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais):");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos:");
    scanf("%d", &pontosturisticos1);
    
    // Exibição da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    
    return 0;


    
}
