#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char letra1, letra2;
  char codigo1[4], codigo2[4], NomeDaCidade1[20], NomeDoEstado2[20];
  int populacao1, populacao2;
  float AreaEmKm2_1, AreaEmKm2_2;
  float PIB1, PIB2;
  int PontosTuristicos1, PontosTuristicos2;
  float PIBCAPITA1, PIBCAPITA2;
  float Densidade1, Densidade2;
  // Área para entrada de dados
  printf("Digite uma letra de 'A' a 'H' para representar um Estado 1:\n");
  scanf(" %c", &letra1);

  printf("Digite um numero de '01' a '04' seguido da letra do seu Estado 1:\n");
  scanf(" %s", codigo1);

  printf("Digite o nome da cidade 1:\n");
  scanf(" %s", NomeDaCidade1);

  printf("Digite a população da cidade 1:\n");
  scanf(" %d", &populacao1);

  printf("Digite a área da cidade 1:\n");
  scanf(" %f", &AreaEmKm2_1);

  printf("Digite o PIB da cidade 1:\n");
  scanf(" %f", &PIB1);

  printf("Digite o número de pontos turísticos da cidade 1:\n");
  scanf(" %d", &PontosTuristicos1);

  Densidade1 = (populacao1 / AreaEmKm2_1);
  PIBCAPITA1 = (PIB1 / populacao1);

  // Segunda cidade//
  printf("Digite uma letra de 'A' a 'H' para representar um Estado 2:\n");
  scanf(" %c", &letra2);

  printf("Digite um numero de '01' a '04' seguido da letra do seu Estado 2:\n");
  scanf(" %s", codigo2);

  printf("Digite o nome da cidade 2:\n");
  scanf(" %s", NomeDoEstado2);

  printf("Digite a população da cidade 2:\n");
  scanf(" %d", &populacao2);

  printf("Digite a área da cidade 2:\n");
  scanf(" %f", &AreaEmKm2_2);

  printf("Digite o PIB da cidade 2:\n");
  scanf(" %f", &PIB2);

  printf("Digite o número de pontos turísticos da cidade 2:\n");
  scanf(" %d", &PontosTuristicos2);

  Densidade2 = (populacao2 / AreaEmKm2_2);
  PIBCAPITA2 = (PIB2 / populacao2);

  // Área para exibição dos dados da cidade
  printf("Carta 1:\n");
  printf("Estado 1: %c\n", letra1);
  printf("Codigo 1: %s\n", codigo1);
  printf("Nome da cidade 1: %s\n", NomeDaCidade1);
  printf("População da cidade 1: %d\n", populacao1);
  printf("Área da cidade 1 em km²: %.2f km² \n", AreaEmKm2_1);
  printf("PIB da cidade 1: %.2f\n", PIB1);
  printf("Pontos turísticos da cidade 1: %d\n", PontosTuristicos1);
  printf("Densidade Populacional 1: %.2f\n", Densidade1);
  printf("PIB per Capita 1: %.2f\n", PIBCAPITA1);

  printf("Carta 2:\n");
  printf("Estado 2: %c\n", letra2);
  printf("Codigo 2: %s\n", codigo2);
  printf("Nome da cidade 2: %s\n", NomeDoEstado2);
  printf("População da cidade 2: %d\n", populacao2);
  printf("Área da cidade 2 em km²: %.2f km² \n", AreaEmKm2_2);
  printf("PIB da cidade 2: %.2f\n", PIB2);
  printf("Pontos turísticos da cidade 2: %d\n", PontosTuristicos2);
  printf("Densidade Populacional 2: %.2f\n", Densidade2);
  printf("PIB per Capita 2: %.2f\n", PIBCAPITA2);

  return 0;
}
