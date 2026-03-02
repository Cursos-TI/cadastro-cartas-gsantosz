#include <stdio.h>

int main(){

    // VARIAVEIS
    char estado[3];
    char codigo[10];
    char nomecidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float densidade;
    float pibcapita;
    //

    // ENTRADA DE DADOS:

    printf("Digite o estado: ");
    scanf("%s", &estado);

    printf("Digite o codigo: ");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomecidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a area: ");
    scanf("%f", &area);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite quantidade de pontos turisticos: ");
    scanf("%d", &pontosturisticos);
    // 
    
    // CALCULOS

    densidade = populacao / area;
    pibcapita = pib / populacao;
    //

    // SAIDA DE DADOS
    
    printf("*** CARTA ***\n");

    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2fkm²\n", area);
    printf("PIB: %f\n", pib);
    printf("Quantidade pontos turisticos: %d\n", pontosturisticos);
    printf("Densidade Populacional: %f\n", densidade);
    printf("PIB per CAPITA: %f\n", pibcapita);
    
    return 0;

    
}