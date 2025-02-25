#include <stdio.h>

int main(){
    
    //Declaracao de Variaveis

char estado1, estado2;
char codigodcarta1[4], codigodcarta2[4];
char nomedcidade1[50], nomedcidade2[50];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int turistico1, turistico2;

    //Declaracao do codigo

printf("Bem vindo ao sistema de cadastro de cartas do Super Trunfo\n");
printf("DADOS DA CARTA 1 \n");

printf("Digite uma letra de A a H (Estado): \n");
scanf(" %c", &estado1);

printf("Digite o codigo da carta: \n");
scanf("%s", &codigodcarta1);

printf("Digite o nome da cidade: \n");
scanf("%s", &nomedcidade1);

printf("Digite a populacao da cidade: \n");
scanf("%d", &populacao1);

printf("Digite a area da cidade (em km²): \n");
scanf("%f", &area1);

printf("Digite o PIB da cidade: \n");
scanf("%f", &pib1);

printf("Digite a quantidade de pontos turisticos da cidade: \n");
scanf("%d", &turistico1);
printf("\n");

printf("DADOS DA CARTA 2 \n");

printf("Digite uma letra de A a H (Estado): \n");
scanf(" %c", &estado2);

printf("Digite o codigo da carta: \n");
scanf("%s", &codigodcarta2);

printf("Digite o nome da cidade: \n");
scanf("%s", &nomedcidade2);

printf("Digite a populacao da cidade: \n");
scanf("%d", &populacao2);

printf("Digite a area da cidade (em km²): \n");
scanf("%f", &area2);

printf("Digite o PIB da cidade: \n");
scanf("%f", &pib2);

printf("Digite a quantidade de pontos turisticos da cidade: \n");
scanf("%d", &turistico2);

    //Exibir dados cadastrados
printf("\n");
printf("DADOS DA CARTA 1 \n");
printf("Estado: %c\n", estado1);
printf("Codigo da carta: %s\n", codigodcarta1);
printf("Nome da Cidade: %s\n", nomedcidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %f km²\n", area1);
printf("Pib: %f bilhoes de reais\n", pib1);
printf("Quantidade de pontos turisticos: %d\n", turistico1);

printf("\n");
printf("DADOS DA CARTA 2 \n");
printf("Estado: %c\n", estado2);
printf("Codigo da carta: %s\n", codigodcarta2);
printf("Nome da Cidade: %s\n", nomedcidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %f km²\n", area2);
printf("Pib: %f bilhoes de reais\n", pib2);
printf("Quantidade de pontos turisticos: %d\n", turistico2);
return 0;


}











