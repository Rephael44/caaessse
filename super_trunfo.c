#include <stdio.h>

int main() {
    char estado1[30], estado2[30];  // Nome dos estados
    char codigo1[5], codigo2[5]; // Código da carta
    char cidade1[100], cidade2[100]; // Nome da cidades
    int populacao1, populacao2; // População de ambas as cidades
    float area1, area2, pib1, pib2; // Kilometros e PIBs das cidades.
    int pontos1, pontos2; // Pontos turísticos

    // Entrada de dados para a carta 1
    printf("Insira os dados da Carta 1:\n");  
    printf("Estado (A-H): ");
    scanf(" %s", &estado1);  // %s para que seja possível informar o estado por extenso.
    printf("Código da Carta (ex: A01, B02): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);  // Permite nome com espaços.
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Entrada de dados para a carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %s", &estado2);
    printf("Código da Carta (ex: A01, B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Exibição dos dados das cartas 1 e 2
    printf("\nCarta 1:\n");
    printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", 
            estado1, codigo1, cidade1, populacao1, area1, pib1, pontos1);
    // Em cada mensagem desses printfs, o especificador de formato vai buscar os dados inseridos acima para ser mostrado o resultado das cartas após a execução do programa.
    printf("\nCarta 2:\n");
    printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", 
            estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2);

    return 0;
}





