#include <stdio.h>

int main(){
    
    // Declaração de Variaveis.

char estado1, estado2;
char codigo_da_carta1[50], codigo_da_carta2[50];
char nome_da_cidade1[50], nome_da_cidade2[50];
int populacão1, populacão2;
float area_km1, area_km2;
float pib1, pib2;
int pontos_turisticos1, pontos_turisticos2;

// Mensagem de boas vindas
printf("Bem vindo ao Cadastro de Cartas do Jogo Super Trunfo!\n");

// Cadastro de dados
printf("Digite a inicial do Estado (A-H): \n");
scanf("%c", &estado1);

printf("Digite o código da carta(inicial do estado + 01-04)\n");
scanf("%s", &codigo_da_carta1);

printf("Digite o nome da cidade: \n");
scanf("%s", &nome_da_cidade1);

printf("Digite a população da cidade \n");
scanf("%d", &populacão1);

return 0;










}