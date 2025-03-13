#include <stdio.h>
// Código referente a atividade do nível aventureiro da matéria Super Trunfo em C: fundamentos e técnicas avançadas

int main() {
    char estado1[30], estado2[30];  // Nome dos estados
    char codigo1[5], codigo2[5]; // Código da carta
    char cidade1[100], cidade2[100]; // Nome da cidades
    int populacao1, populacao2; // População de ambas as cidades
    float area1, area2, pib1, pib2; // Kilometros e PIBs das cidades.
    int pontos1, pontos2; // Pontos turísticos
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;

    // Entrada de dados para a carta 1
    printf("Insira os dados da Carta 1:\n");  
    printf("Estado (A-H): ");
    scanf("%c", &estado1);  // %s para que fosse possível informar o nome do estado por extenso faria mais sentido no momento.. mas como pediram c, fica o c.
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



     // Calcular a densidade populacional e o PIB per capita para a carta 1
     densidade1 = populacao1 / area1;
     pibPerCapita1 = pib1 * 1000000000 / populacao1; 
 
     // Calcular a densidade populacional e o PIB per capita para a carta 2
     densidade2 = populacao2 / area2;
     pibPerCapita2 = pib2 * 1000000000 / populacao2; 




// Exibição dos dados da carta 1 
printf("\nCarta 1:\n");
printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", 
        estado1, codigo1, cidade1, populacao1, area1, pib1, pontos1, densidade1, pibPerCapita1);

// Exibição dos dados da carta 2
printf("\nCarta 2:\n");
printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", 
        estado2, codigo2, cidade2, populacao2, area2, pib2, pontos2, densidade2, pibPerCapita2);

    return 0;
}





