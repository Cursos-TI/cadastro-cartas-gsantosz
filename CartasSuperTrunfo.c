#include <stdio.h>

int main(){

    // VARIAVEIS CARTA 1
    char estado1[3];
    char codigo1[10];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidade1;
    float pibcapita1;

    // VARIAVEIS CARTA 2

    char estado2[3];
    char codigo2[10];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    float pibcapita2;

    //

    // ENTRADA DE DADOS CARTA 1:
    printf("CARTA 1:\n");

    printf("Digite o estado: ");
    scanf("%s", &estado1);

    printf("Digite o codigo: ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomecidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos1); 

    // ENTRADA DE DADOS CARTA 2
    printf("CARTA 2: \n");

    printf("Digite o estado: ");
    scanf("%s", &estado2);

    printf("Digite o codigo: ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomecidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos2);
    printf("\n");


    
    // CALCULOS

    densidade1 = populacao1 / area1;
    pibcapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibcapita2 = pib2 / populacao2;

    //

    // SAIDA DE DADOS
    
    printf("*** CARTA 1 ***\n");

    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2fkm²\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Quantidade pontos turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %f\n", densidade1);
    printf("PIB per CAPITA: %f\n", pibcapita1);
    printf("\n");

    printf("*** CARTA 2 ***\n");

    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2fkm²\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Quantidade pontos turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %f\n", densidade2);
    printf("PIB per CAPITA: %f\n", pibcapita2);
    printf("\n");
    
    return 0;

    
}