#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //Definição das Cidades.
    char estado_A[10] = "Paraiba";
    char cidade_A01[10], cidade_A02[10], cidade_A03[10], cidade_A04[10];
    int populacao_A01, populacao_A02, populacao_A03, populacao_A04;
    float area_A01, area_A02, area_A03, area_A04;
    float PIB_A01, PIB_A02, PIB_A03, PIB_A04;
    int pontos_turisticos_A01, pontos_turisticos_A02, pontos_turisticos_A03, pontos_turisticos_A04;


    char estado_B[10] = "Pernambuco";
    char cidade_B01[10], cidade_B02[10], cidade_B03[10], cidade_B04[10];
    int populacao_B01, populacao_B02, populacao_B03, populacao_B04;
    float area_B01, area_B02, area_B03, area_B04;
    float PIB_B01, PIB_B02, PIB_B03, PIB_B04;
    int pontos_turisticos_B01, pontos_turisticos_B02, pontos_turisticos_B03, pontos_turisticos_B04;


    char estado_C[] = "Alagoas";
    char cidade_C01[10], cidade_C02[10], cidade_C03[10], cidade_C04[10];
    int populacao_C01, populacao_C02, populacao_C03, populacao_C04;
    float area_C01, area_C02, area_C03, area_C04;
    float PIB_C01, PIB_C02, PIB_C03, PIB_C04;
    int pontos_turisticos_C01, pontos_turisticos_C02, pontos_turisticos_C03, pontos_turisticos_C04;


    char estado_D[10] = "Sergipe";
    char cidade_D01[10], cidade_D02[10], cidadje_D03[10], cidade_D04[10];
    int populacao_D01, populacao_D02, populacao_D03, populacao_D04;
    float area_D01, area_D02, area_D03, area_D04;
    float PIB_D01, PIB_D02, PIB_D03, PIB_D04;
    int pontos_turisticos_D01, pontos_turisticos_D02, pontos_turisticos_D03, pontos_turisticos_D04;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Bem Vindo ao jogo Super TRUNFO!!!!!\n\n");
    printf("Vamos começar com a digitação das cartas\n\n");
    printf("Digite o nome da cidade A01: ");
    scanf("%s", &cidade_A01);
    printf("Digite a populancao da cidade A01: ");
    scanf("%d", &populacao_A01);
    printf("Digite a área da cidade A01: ");
    scanf("%f", &area_A01);
    printf("Digite o PIB da cidade A01: ");
    scanf("%f", &PIB_A01);
    printf("Digite a quantidade de pontos turisticos da cidade A01: ");
    scanf("%d", &pontos_turisticos_A01);
    
    printf("\nObrigado por inserir os dados da cidade A01.\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Estado A: %s \n", estado_A);
    printf("Cidade A01: %s \n", cidade_A01);
    printf("Populancao da cidade A01: %d\n", populacao_A01);
    printf("Area da cidade A01: %.2f \n", area_A01);
    printf("PIB da cidade A01: %.2f \n", PIB_A01);
    printf("Quantidade de pontos turisticos da cidade A01: %d \n\n\n\n", pontos_turisticos_A01);
    
    return 0;
}