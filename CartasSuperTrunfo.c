#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  char estado;
  char codigo[3];
  char nome_cidade[50];
  int populacao;
  float area;
  float pib;
  int pontos_turisticos;


  // Área para entrada de dados

   printf("Digite o estado da carta:");
   scanf("%c", &estado);

   printf("Digite o codigo da carta:");
   scanf("%s", &codigo);

   printf("Digite o nome da cidade:");
   scanf("%s", &nome_cidade);

   printf("Digite o tamanho da populaçao:");
   scanf("%d", &populacao);

   printf("Digite o tamanho da cidade:");
   scanf("%f", &area);

   printf("Digite o PIB da cidade:");
   scanf("%f", &pib);

   printf("Digite a quantidade de pontos turisticos:");
   scanf("%d", &pontos_turisticos);

  // Área para exibição dos dados da cidade

  printf("Carta 1: \n");
  printf("Estado: %c\n", estado);
  printf("Codigo: %s\n", codigo);
  printf("Nome da cidade: %s\n", nome_cidade);
  printf("População: %d\n", populacao);
  printf("Área: %f\n", area);
  printf("PIB: %f\n", pib);
  printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos);


  

return 0;

} 