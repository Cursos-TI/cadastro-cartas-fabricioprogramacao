#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char Estado;
    char código_da_carta [20], Nome_da_cidade [25];
    int população, Número_de_pontos_turísticos;
    float Àrea, PIB;
    float densidade_populacional;
    float PIB_per_capita;


  

    

    printf("Carta 1:\n");
    printf("Estado: ");
    scanf("%c", &Estado);
    printf("código: ");
    scanf("%s", &código_da_carta);
    printf("Nome da cidade: ");
    scanf("%s", &Nome_da_cidade);
    printf("população: ");
    scanf("%d", &população);
    printf("Área: ");
    scanf("%f", &Àrea);
    printf("PIB: ");
    scanf("%f", &PIB);

    densidade_populacional = população / Àrea;
    PIB_per_capita = PIB / população;

    printf("Número de pontos turísticos: ");
    scanf("%d", &Número_de_pontos_turísticos);
    printf("a densidade populacional é: %f\n", densidade_populacional);
    printf("O PIB per capita é: %f\n", PIB_per_capita );
   

    printf("Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &Estado);
    printf("código: ");
    scanf("%s", &código_da_carta);
    printf("Nome da cidade: ");
    scanf("%s", &Nome_da_cidade);
    printf("população: ");
    scanf("%d", &população);
    printf("Àrea: ");
    scanf("%f", &Àrea);
    printf("PIB: ");
    scanf("%f", &PIB);

    densidade_populacional = população / Àrea;
    PIB_per_capita = PIB / população;

    printf("Número de pontos turisticos: ");
    scanf("%d", &Número_de_pontos_turísticos);
    printf("a densidade poppulacional é: %f\n", densidade_populacional);
    printf("O PIB per capita é: %f\n", PIB_per_capita);
   


   


  // Área para entrada de dados

  // Área para exibição dos dados da cidade

return 0;
} 
