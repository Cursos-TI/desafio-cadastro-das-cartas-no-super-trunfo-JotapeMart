#include <stdio.h>

int main() {
    char estado[30];
    char codigo[5];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pturisticos; // Pontos turísticos
    float densidadepopulacional;
    float PIBperCapita;

    char estado2[30];
    char codigo2[5];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pturisticos2; // Pontos turísticos
    float densidadepopulacional2;
    float PIBperCapita2;

    printf ("Desafio Super Trunfo!\n");

    // Carta 1:
    printf("Digite um estado: ");
    scanf("%s", estado);
     
    printf("Digite o codigo do estado: ");
    scanf("%s", codigo);

    printf("Digite a cidade: ");
    scanf("%s", cidade);

    printf("Digite a populacao do estado: ");
    scanf("%d", &populacao);

    printf("Digite a area do estado em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pturisticos);

    // Carta 2:
    printf("Digite um estado: ");
    scanf("%s", estado2);
     
    printf("Digite o codigo do estado: ");
    scanf("%s", codigo2);

    printf("Digite a cidade: ");
    scanf("%s", cidade2);

    printf("Digite a populacao do estado: ");
    scanf("%d", &populacao2);

    printf("Digite a área do estado em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB do estado: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pturisticos2);

    densidadepopulacional = (float) populacao / area;
    PIBperCapita = (float) pib / populacao;

    densidadepopulacional2 = (float) populacao2 / area2;
    PIBperCapita2 = (float) pib2 / populacao2;

    // Dados sendo mostrados:
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);  // Removido o &
    printf("Área: %.2f km²\n", area);      // Removido o &
    printf("PIB: %.2f Bilhões de reais\n", pib);  // Removido o &
    printf("Número de pontos turísticos: %d\n", pturisticos); // Removido o &
    printf("Densidade populacional: %.2fhab/km²\n", densidadepopulacional);
    printf ("Pib per capita: %.2f\n", PIBperCapita);


    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);  // Removido o &
    printf("Área: %.2f km²\n", area2);      // Removido o &
    printf("PIB: %.2f Bilhões de reais\n", pib2);  // Removido o &
    printf("Número de pontos turísticos: %d\n", pturisticos2); // Removido o &
    printf("Densidade populacional: %.2fhab/km²\n", densidadepopulacional2);
    printf ("Pib per capita: %.2f\n", PIBperCapita2);


    return 0;
}
