#include <stdio.h>

int main(){
    
    // Declaração de Variaveis.

char estado1, estado2;
char codigodacarta1[3], codigo_da_carta2[3];
char nome_da_cidade1[50], nome_da_cidade2[50];
int populacao1, populacao2;
float area_km1, area_km2;
float pib1, pib2;
int turisticos1, turisticos2;

// Mensagem de boas vindas
printf("Bem vindo ao Cadastro de Cartas do Jogo Super Trunfo!\n");

// Cadastro de dados
printf("---- CARTA 1 -----");
printf("Digite a inicial do Estado (A-H): \n");
scanf("%c", &estado1);

printf("Digite o código da carta(inicial do estado + 01-04): \n");
scanf("%c", &codigodacarta1);

printf("Digite o nome da cidade: \n");
scanf("%s", &nome_da_cidade1);

printf("Digite a população da cidade \n");
scanf("%d", &populacao1);

printf("Digite a area (em km²): \n");
scanf("%f", &area_km1 );

printf("Digite o PIB da cidade: \n");
scanf("%f", pib1);

printf("Digite o numero de pontos turisticos da cidade: \n");
scanf("%d", &turisticos1);



printf("---- CARTA 2 -----");
printf("Digite a inicial do Estado (A-H): \n");
scanf("%c", &estado2);

printf("Digite o código da carta(inicial do estado + 01-04): \n");
scanf("%s", &codigo_da_carta2);

printf("Digite o nome da cidade: \n");
scanf("%s", &nome_da_cidade2);

printf("Digite a população da cidade \n");
scanf("%d", &populacao2);

printf("Digite a area (em km²): \n");
scanf("%f", &area_km2);

printf("Digite o PIB da cidade: \n");
scanf("%f", pib2);

printf("Digite o numero de pontos turisticos da cidade: \n");
scanf("%d", &turisticos2);
}











