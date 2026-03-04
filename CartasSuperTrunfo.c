#include <stdio.h>


int main (){

///******** ENTRADA DE DADOS *************

   char estado1[3];
   char codigo1[3];
   char nomeCidade1[50];
   unsigned int populacao1;
   float area1;
   float PIB1;
   unsigned int pontosTuristicos1;
   float densidade1;
   float pibcapita1;
   float superpoder1;

   char estado2[3];
   char codigo2[10];
   char nomeCidade2[50];
   unsigned int populacao2;
   float area2;
   float PIB2;
   unsigned int pontosTuristicos2;
   float densidade2;
   float pibcapita2;
   float superpoder2;

   //////////////////////////////////
/******** ENTRADA DE DADOS DA CARTA 1 *****************/
   printf("\nDigite o ESTADO da carta 1: ");
   scanf("%s", &estado1);

   printf("\nDigite o CODIGO da carta 1: ");
   scanf("%s", &codigo1);

   printf("\nDigite o NOME DA CIDADE da carta 1: ");
   scanf("%s", &nomeCidade1);

   printf("\nDigite a POPULACAO da carta 1: ");
   scanf("%u", &populacao1);

   printf("\nDigite a AREA da carta 1: ");
   scanf("%f", &area1);

   printf("\nDigite o PIB da carta 1: ");
   scanf("%f", &PIB1);

   printf("\nDigite a quantidade de PONTOS TURISTICOS da carta 1: ");
   scanf("%u", &pontosTuristicos1);

/********************************************************************** */
/*********** ENTRADA DE DADOS CARTA 2 ***************/

   printf("\nDigite o ESTADO da carta 2: ");
   scanf("%s", &estado2);

   printf("\nDigite o CODIGO da carta 2: ");
   scanf("%s", &codigo2);

   printf("\nDigite o NOME DA CIDADE da carta 2: ");
   scanf("%s", &nomeCidade2);

   printf("\nDigite a POPULACAO da carta 2: ");
   scanf("%u", &populacao2);

   printf("\nDigite a AREA da carta 2: ");
   scanf("%f", &area2);

   printf("\nDigite o PIB da carta 2: ");
   scanf("%f", &PIB2);

   printf("\nDigite a quantidade de PONTOS TURISTICOS da carta 2: ");
   scanf("%u", &pontosTuristicos2);
/****************************************************************************/
/*******************   CALCULOS **************/

densidade1 =  populacao1 / area1;
densidade2 =  populacao2 / area2;

pibcapita1 =  PIB1 / populacao1;
pibcapita2 =  PIB2 / populacao2;
 
superpoder1 = populacao1 + area1 + PIB1 + pontosTuristicos1 + pibcapita1 + (1 / densidade1);

superpoder2 = populacao2 + area2 + PIB2 + pontosTuristicos2 + pibcapita2 + (1 / densidade2);


/*************** SAIDA DE DADOS CARTA 1 *********************/
printf("\n-------- CARTA 1  ---------\n");

printf("ESTADO da CARTA 1: %s\n", estado1);
printf("CODIGO da CARTA 1: %s\n", codigo1);
printf("NOME DA CIDADE da CARTA 1: %s\n", nomeCidade1);
printf("POPULACAO da CARTA 1: %u\n", populacao1);
printf("TAMANHO DA CIDADE da CARTA 1: %f\n", area1);
printf("PIB da CIDADE da CARTA 1: %f\n", PIB1);
printf("\nQUANTIDADE de PONTOS TURISTICOS da CARTA 1: %u\n", pontosTuristicos1);

/*************** SAIDA DE DADOS DA CARTA 2 **********************/
printf("\n-------- CARTA 2  ---------\n");

printf("\nESTADO da CARTA 2: %s\n", estado2);
printf("CODIGO da CARTA 2: %s\n", codigo2);
printf("NOME DA CIDADE da CARTA 2: %s\n", nomeCidade2);
printf("POPULACAO da CARTA 2: %u\n", populacao2);
printf("TAMANHO DA CIDADE da CARTA 2: %f\n", area2);
printf("PIB da CIDADE da CARTA 2: %f\n", PIB2);
printf("\nQUANTIDADE de PONTOS TURISTICOS da CARTA 2: %u\n", pontosTuristicos2);


/******************** COMPARACOES DE SUPER PODER ********************* */

printf("\n--- RESULTADO DAS COMPARACOES DAS CARTAS  ---\n");

printf("POPULACAO: Carta 1 venceu? %d\n", populacao1 > populacao2);
printf("AREA: Carta 1 venceu? %d\n", area1 > area2);
printf("PIB: Carta 1 venceu? %d\n", PIB1 > PIB2);
printf("Pontos Turisticos: Carta 1 venceu? %d\n", pontosTuristicos1 > pontosTuristicos2);
printf("Densidade Populacional: Carta 1 venceu?  %d\n", densidade1 > densidade2);
printf("PIB PER CAPITA: Carta 1 venceu? %d\n", pibcapita1 > pibcapita2);

printf("SUPER PODER: Carta 1 venceu? %d\n", superpoder1 > superpoder2);

     




return 0;




}