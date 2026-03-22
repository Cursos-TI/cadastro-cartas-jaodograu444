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
  float SuperPoder1;
  float SuperPoder2;
  float inversoDensidade1;
  float inversoDensidade2;
  int resultadoP1_P2;
  int resultadoA1_A2;
  int resultadoPIB1_PIB2;
  int resultadoPT1_PT2;
  int resultadoDP1_DP2;
  int resultadoPC1_PC2;
  int resultadoS1_S2;
  int EscolhaComparacao;

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
  // Calculos e resultados das cartas//
  Densidade1 = (populacao1 / AreaEmKm2_1);
  PIBCAPITA1 = (PIB1 / populacao1);
  Densidade2 = (populacao2 / AreaEmKm2_2);
  PIBCAPITA2 = (PIB2 / populacao2);
  inversoDensidade1 = (1 / Densidade1);
  inversoDensidade2 = (1 / Densidade2);
  SuperPoder1 = (populacao1 + AreaEmKm2_1 + PIB1 + PontosTuristicos1 + PIBCAPITA1 + inversoDensidade1);
  SuperPoder2 = (populacao2 + AreaEmKm2_2 + PIB2 + PontosTuristicos2 + PIBCAPITA2 + inversoDensidade2);
  resultadoP1_P2 = (populacao1 > populacao2);
  resultadoA1_A2 = (AreaEmKm2_1 > AreaEmKm2_2);
  resultadoPIB1_PIB2 = (PIB1 > PIB2);
  resultadoPT1_PT2 = (PontosTuristicos1 > PontosTuristicos2);
  resultadoDP1_DP2 = (Densidade1 < Densidade2);
  resultadoPC1_PC2 = (PIBCAPITA1 > PIBCAPITA2);
  resultadoS1_S2 = (SuperPoder1 > SuperPoder2);

  // Área para exibição dos dados da cidade 1 //
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
  // Área para exibição dos dados da cidade 2 //
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
  // comparação entre as duas cartas//

  printf("### Jogo da comparação ###\n");
  printf("Escolha um atributo para comparar\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de pontos turísticos\n");
  printf("5. Densidade populacional\n");
  scanf("%d", &EscolhaComparacao);

  switch (EscolhaComparacao)
  {
  case 1:
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s: %d\n", NomeDaCidade1, populacao1);
    printf("Carta 2 - %s: %d\n", NomeDoEstado2, populacao2);
    if (populacao1 > populacao2)
    {
      printf("Resultado: Carta 1 (%s) venceu", NomeDaCidade1);
    }
    else
    {
      printf("Resultado: Carta 2 (%s) venceu", NomeDoEstado2);
    }
    break;
    case 2:
    printf("Comparação de cartas (Atributo: Área):\n");
    printf("Carta 1 - %s: %f\n", NomeDaCidade1, AreaEmKm2_1);
    printf("Carta 2 - %s: %f\n", NomeDoEstado2, AreaEmKm2_2);
    if (AreaEmKm2_1 > AreaEmKm2_2)
    {
      printf("Resultado: Carta 1 (%s) venceu", NomeDaCidade1);
    }
    else
    {
      printf("Resultado: Carta 2 (%s) venceu", NomeDoEstado2);
    }
    break;
    case 3:
    printf("Comparação de cartas (Atributo: PIB):\n");
    printf("Carta 1 - %s: %d\n", NomeDaCidade1, PIB1);
    printf("Carta 2 - %s: %d\n", NomeDoEstado2, PIB2);
    if (PIB1 > PIB2)
    {
      printf("Resultado: Carta 1 (%s) venceu", NomeDaCidade1);
    }
    else
    {
      printf("Resultado: Carta 2 (%s) venceu", NomeDoEstado2);
    }
    break;
    case 4:
    printf("Comparação de cartas (Atributo: Número de pontos turísticos):\n");
    printf("Carta 1 - %s: %d\n", NomeDaCidade1, PontosTuristicos1);
    printf("Carta 2 - %s: %d\n", NomeDoEstado2, PontosTuristicos2);
    if (PontosTuristicos1 > PontosTuristicos2)
    {
      printf("Resultado: Carta 1 (%s) venceu", NomeDaCidade1);
    }
    else
    {
      printf("Resultado: Carta 2 (%s) venceu", NomeDoEstado2);
    }
    break;
    case 5:
    printf("Comparação de cartas (Atributo: Densidade populacional):\n");
    printf("Carta 1 - %s: %d\n", NomeDaCidade1, Densidade1);
    printf("Carta 2 - %s: %d\n", NomeDoEstado2, Densidade2);
    if (Densidade1 < Densidade2)
    {
      printf("Resultado: Carta 1 (%s) venceu", NomeDaCidade1);
    }
    else
    {
      printf("Resultado: Carta 2 (%s) venceu", NomeDoEstado2);
    }
    break;
    case 6:
    printf("Comparação de cartas (Atributo: PIB per Capita):\n");
    printf("Carta 1 - %s: %d\n", NomeDaCidade1, PIBCAPITA1);
    printf("Carta 2 - %s: %d\n", NomeDoEstado2, PIBCAPITA2);
    if (PIBCAPITA1 > PIBCAPITA2)
    {
      printf("Resultado: Carta 1 (%s) venceu", NomeDaCidade1);
    }
    else
    {
      printf("Resultado: Carta 2 (%s) venceu", NomeDoEstado2);
    }
    break;
    case 7:
    printf("Comparação de cartas (Atributo: Super Poder):\n");
    printf("Carta 1 - %s: %d\n", NomeDaCidade1, SuperPoder1);
    printf("Carta 2 - %s: %d\n", NomeDoEstado2, SuperPoder2);
    if (SuperPoder1 > SuperPoder2)
    {
      printf("Resultado: Carta 1 (%s) venceu", NomeDaCidade1);
    }
    else
    {
      printf("Resultado: Carta 2 (%s) venceu", NomeDoEstado2);
    }
    break;

  default:
    break;
  }

  // printf("Resultado das Comparações\n");
  // printf("População: %s (%d)\n", resultadoP1_P2 ? "Carta 1 venceu" : "Carta 2 venceu", resultadoP1_P2);
  // printf("Área: %s (%d)\n", resultadoA1_A2 ? "Carta 1 venceu" : "Carta 2 venceu", resultadoA1_A2);
  // printf("PIB: %s (%d)\n", resultadoPIB1_PIB2 ? "Carta 1 venceu" : "Carta 2 venceu", resultadoPIB1_PIB2);
  // printf("Pontos Turísticos: %s (%d)\n", resultadoPT1_PT2 ? "Carta 1 venceu" : "Carta 2 venceu", resultadoPT1_PT2);
  // printf("Densidade Populacional: %s (%d)\n", resultadoDP1_DP2 ? "Carta 1 venceu" : "Carta 2 venceu", resultadoDP1_DP2);
  // printf("PIB per Capita: %s (%d)\n", resultadoPC1_PC2 ? "Carta 1 venceu" : "Carta 2 venceu", resultadoPC1_PC2);
  // printf("Super Poder: %s (%d)\n", resultadoS1_S2 ? "Carta 1 venceu" : "Carta 2 venceu", resultadoS1_S2);

  // comparação das cartas, atributo: População//
  //printf("Comparação de cartas (Atributo: População):\n");
  //printf("Carta 1 - %s: %d\n", NomeDaCidade1, populacao1);
  //printf("Carta 2 - %s: %d\n", NomeDoEstado2, populacao2);
  //if (populacao1 > populacao2)
  //{
   //printf("Resultado: Carta 1 (%s) venceu", NomeDaCidade1);
  //}
  //else
  //{
  //printf("Resultado: Carta 2 (%s) venceu", NomeDoEstado2);
  //}

  return 0;
}
