#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  printf("SUPER TRUNFO\n Cadastro de cartas\n");
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //variaveis da cidade 1
  char estado1;
  char codigo1[5];
  char nome1[20];
  unsigned long int populacao1;
  float areakm1;
  float pib1;
  int pontosturisticos1;
  float DensidadePopulacional1;
  float PibPerCapita1;

  //variaveis da cidade 2
  char estado2;
  char codigo2[5];
  char nome2[20];
  unsigned long int populacao2;
  float areakm2;
  float pib2;
  int pontosturisticos2;
  float DensidadePopulacional2;
  float PibPerCapita2;

  // Área para entrada de dados

  //da cidade 1
  printf("\n cadastro da cidade 1:\n");
  printf("insira o estado:\n");
  scanf(" %c", &estado1);
  getchar();

  printf("insira o codigo da cidade:\n");
  scanf(" %s", codigo1);

  printf("insira o nome da cidade:\n");
  scanf(" %s", nome1);

  printf("insira a população da cidade 1:\n");
  scanf("%lu", &populacao1);

  printf("insira a área em km da cidade 1:\n");
  scanf("%f", &areakm1);

  printf("insira o PIB dessa cidade:\n");
  scanf("%f", &pib1);

  printf("insira o numero de pontos turisticos da cidade 1:\n");
  scanf("%d", &pontosturisticos1);

  DensidadePopulacional1 = (float)populacao1 / areakm1;
  PibPerCapita1 = pib1 / (float)populacao1;

  //da cidade 2
  printf("\n cadastro da cidade 2:\n");
  printf("insira o estado:\n");
  scanf(" %c", &estado2);
  getchar();
  
  printf("insira o codigo da cidade:\n");
  scanf(" %s", codigo2);

  printf("insira o nome da cidade:\n");
  scanf(" %s", nome2);

  printf("insira a população da cidade 2:\n");
  scanf("%lu", &populacao2);

  printf("insira a área em km da cidade 2:\n");
  scanf("%f", &areakm2);

  printf("insira o PIB dessa cidade:\n");
  scanf("%f", &pib2);

  printf("insira o numero de pontos turisticos da cidade 1:\n");
  scanf("%d", &pontosturisticos2);

  DensidadePopulacional2 = (float)populacao2 / areakm2;
  PibPerCapita2 = pib2 / (float)populacao2;

  // Área para exibição dos dados das cidades
  printf("\n### CIDADE 1 ### \n");
  printf("Estado: %c \n", estado1);
  printf("Código: %s \n", codigo1);
  printf("Nome: %s \n", nome1);
  printf("População: %lu \n", populacao1);
  printf("Área em km: %.2f \n", areakm1);
  printf("PIB: %.2f \n", pib1);
  printf("número de pontos turísticos: %d \n", pontosturisticos1);
  printf("Densidade Populacional: %2.f \n", DensidadePopulacional1);
  printf("PIB Per Capita: %2.f \n", PibPerCapita1);
 
  printf("\n");

  printf("### CIDADE 2 ### \n");
  printf("Estado: %c \n", estado2);
  printf("Código: %s \n", codigo2);
  printf("Nome: %s \n", nome2);
  printf("População: %lu \n", populacao2);
  printf("Área em km: %.2f \n", areakm2);
  printf("PIB: %.2f \n", pib2);
  printf("Número de pontos turísticos: %d \n", pontosturisticos2);
  printf("Densidade Populacional: %.2f \n", DensidadePopulacional2);
  printf("PIB Per Capita: %.2f \n", PibPerCapita2);

  printf("\n");
  
  //Calcular super poder
  float superpoder1 = (float)populacao1 + areakm1 + pib1 + (float)pontosturisticos1 + 1.0/DensidadePopulacional1;
  float superpoder2 = (float)populacao2 + areakm2 + pib2 + (float)pontosturisticos2 + 1.0/DensidadePopulacional2;
  
  printf("Super poder da carta 1: %.2f \n", superpoder1);
  printf("Super poder da carta 2: %.2f \n", superpoder2);

  //COMPARAÇÃO DE PROPRIEDADES
  printf("\n COMPARAÇÃO DE CARTAS \n");

  int resultadoPopulacao = populacao1 > populacao2;
  int resultadoArea = areakm1 > areakm2;
  int resultadoPib = pib1 > pib2;
  int resultadoPontos = pontosturisticos1 > pontosturisticos2;
  int resultadoDensidade = DensidadePopulacional1 < DensidadePopulacional2;
  int resultadoPibPerCapita = PibPerCapita1 > PibPerCapita2;

  printf("População: %d \n", resultadoPopulacao);
  printf("Área em km: %d \n", resultadoArea);
  printf("PIB: %d \n", resultadoPib);
  printf("Pontos Turísticos: %d \n", resultadoPontos);
  printf("Densidade Populacional: %d \n", resultadoDensidade);
  printf("PIB Per Capita: %d \n", resultadoPibPerCapita);

return 0;
} 
