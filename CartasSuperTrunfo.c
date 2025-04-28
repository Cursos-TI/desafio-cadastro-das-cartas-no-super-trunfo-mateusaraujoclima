#include <stdio.h>

int main (){

    char state;
    char letterCode[3];
    char cityName[35];
    int population;
    float area;
    float pib;
    int numberOfTouristAttractions;

    char state1;
    char letterCode1[3];
    char cityName1[35];
    int population1;
    float area1;
    float pib1;
    int numberOfTouristAttractions1;

    printf("Forneça as informações solicitadas para a carta 1 e tecle ENTER: \n");

    printf("Estado: Uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &state);

    printf("Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", letterCode);

    printf("Nome da Cidade: O nome da cidade: \n");
    scanf("%s", &cityName);

    printf("População: O número de habitantes da cidade: \n");
    scanf("%d", &population);

    printf("Área (em km²): A área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);

    printf("PIB: O Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &numberOfTouristAttractions);

    printf("Forneça as informações solicitadas para a carta 2 e tecle ENTER: \n");
    
    printf("Estado: Uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &state1);

    printf("Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): \n");
    scanf("%s", &letterCode1);

    printf("Nome da Cidade: O nome da cidade: \n");
    scanf("%s", &cityName1);

    printf("População: O número de habitantes da cidade: \n");
    scanf("%d", &population1);

    printf("Área (em km²): A área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);

    printf("PIB: O Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &numberOfTouristAttractions1);

    printf("Carta 1: \n"
        "Estado: %c \n"
        "Código: %s \n"
        "Nome da Cidade: %s \n"
        "População: %d \n"
        "Área: %f km² \n"
        "PIB: %f bilhões de reais \n"
        "Número de Pontos Turísticos: %d \n", state, letterCode, cityName, population, area, pib, numberOfTouristAttractions);

    printf("Carta 2: \n"
        "Estado: %c \n"
        "Código: %s \n"
        "Nome da Cidade: %s \n"
        "População: %d \n"
        "Área: %f km² \n"
        "PIB: %f bilhões de reais \n"
        "Número de Pontos Turísticos: %d \n", state1, letterCode1, cityName1, population1, area1, pib1, numberOfTouristAttractions1);

    return 0;
}
