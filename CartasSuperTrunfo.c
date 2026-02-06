#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char carta_1_estado;
  char carta_1_codigo[4];
  char carta_1_cidade[60];
  int carta_1_populacao;
  float carta_1_area;
  float carta_1_pib;
  int carta_1_pontos_turisticos;

  char carta_2_estado;
  char carta_2_codigo[4];
  char carta_2_cidade[60];
  int carta_2_populacao;
  float carta_2_area;
  float carta_2_pib;
  int carta_2_pontos_turisticos;


  // Área para entrada de dados
  printf("Carta 1: Digite a Letra do Estado A-H: ");
  scanf("%c", &carta_1_estado);

  printf("Carta 1: Digite o Código da Carta (Letra do estado + 2 digitos): ");
  scanf("%s", carta_1_codigo);

  // recupera o caractere \n deixado no buffer pelo scanf
  getchar();

  printf("Carta 1: Digite o Nome da Cidade: ");
  fgets(carta_1_cidade, 60, stdin);

  carta_1_cidade[strcspn(carta_1_cidade, "\n")] = 0;

  printf("Carta 1: Digite o Numero de habitantes: ");
  scanf("%d", &carta_1_populacao);

  printf("Carta 1: Digite a Area da cidade em km quadrados: ");
  scanf("%f", &carta_1_area);

  printf("Carta 1: Digite o PIB da cidade: ");
  scanf("%f", &carta_1_pib);

  printf("Carta 1: Digite o numero de pontos turisticos da cidade: ");
  scanf("%d", &carta_1_pontos_turisticos);


  getchar(); // recupera o caractere \n deixado no buffer

  printf("\n\n");
  printf("Carta 2: Digite a Letra do Estado A-H: ");
  scanf("%c", &carta_2_estado);

  printf("Carta 2: Digite o Código da Carta (Letra do estado + 2 digitos): ");
  scanf("%s", carta_2_codigo);

  // recupera o caractere \n deixado no buffer pelo scanf
  getchar();

  printf("Carta 2: Digite o Nome da Cidade: ");
  fgets(carta_2_cidade, 60, stdin);

  carta_2_cidade[strcspn(carta_2_cidade, "\n")] = 0;

  printf("Carta 2: Digite o Numero de habitantes: ");
  scanf("%d", &carta_2_populacao);


  printf("Carta 2: Digite a Area da cidade em km quadrados: ");
  scanf("%f", &carta_2_area);

  printf("Carta 2: Digite o PIB da cidade: ");
  scanf("%f", &carta_2_pib);

  printf("Carta 2: Digite o numero de pontos turisticos da cidade: ");
  scanf("%d", &carta_2_pontos_turisticos);

  // Área para exibição dos dados da cidade
  printf("\n\n");
  printf("Carta 1:\n");

  printf("Estado: %c\n", carta_1_estado);
  printf("Código: %s\n", carta_1_codigo);
  printf("Nome da Cidade: %s\n", carta_1_cidade);
  printf("População: %d\n", carta_1_populacao);
  printf("Área: %.2f\n", carta_1_area);
  printf("PIB: %.2f bilhões de reais\n", carta_1_pib);
  printf("Número de Pontos Turísticos: %d\n", carta_1_pontos_turisticos);

  printf("\n");
  printf("Carta 2:\n");

  printf("Estado: %c\n", carta_2_estado);
  printf("Código: %s\n", carta_2_codigo);
  printf("Nome da Cidade: %s\n", carta_2_cidade);
  printf("População: %d\n", carta_2_populacao);
  printf("Área: %.2f\n", carta_2_area);
  printf("PIB: %.2f bilhões de reais\n", carta_2_pib);
  printf("Número de Pontos Turísticos: %d\n", carta_2_pontos_turisticos);


  return 0;
} 
