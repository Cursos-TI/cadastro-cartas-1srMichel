#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  printf("SUPER TRUNFO \n Cadastro de cartas \n");
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //variaveis da cidade 1
  char estado1;
  char codigo1[5];
  char nome1[20];
  int populacao1;
  float areakm1;
  float pib1;
  int pontosturisticos1;

  //variaveis da cidade 2
   char estado2;
  char codigo2[5];
  char nome2[20];
  int populacao2;
  float areakm2;
  float pib2;
  int pontosturisticos2;

  // Área para entrada de dados

  //da cidade 1
  printf("cadastro da cidade 1: \n");
  printf("insira o estado: \n");
  scanf(" %c", estado1);

  printf("insira o codigo da cidade: \n");
  scanf(" %s", codigo1);

  printf("insira o nome da cidade: \n");
  scanf(" %s", nome1);

  printf("insira a população da cidade 1: \n");
  scanf("%i", populacao1);

  printf("insira a área em km da cidade 1: \n");
  scanf("%f", areakm1);

  printf("insira o PIB dessa cidade: \n");
  scanf("%i", pib1);

  printf("insira o numero de pontos turisticos da cidade 1: \n");
  scanf("%i", pontosturisticos1);

  // Área para exibição dos dados da cidade

return 0;
} 
