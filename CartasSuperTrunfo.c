#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado;
  char codigo[3];
  char nome_cidade[10];
  int populacao;
  float area;
  float pib;
  int pontos_turisticos;


  // Área para entrada de dados

   printf("Digite o estado da carta:");
   scanf("%s", &estado);

   printf("Digite o codigo da carta:");
   scanf("%s", &codigo);

   printf("Digite o nome da cidade:");
   scanf("%s", &nome_cidade);

   printf("Digite o tamanho da populaçao:");
   scanf("%d", &populacao);

   printf("Digite o tamanho da cidade:");
   scanf("%f", &area, );

   printf("Digite o PIB da cidade:");
   scanf("%f", &pib);

   printf("Digite a quantidade de pontos turisticos:");
   scanf("%d", &pontos_turisticos);

  // Área para exibição dos dados da cidade

  printf("Carta 1:");
  printf("Estado: "%s", estado \n")
  printf("Codigo: "%s", codigo \n");

return 0;
} 
