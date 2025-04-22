#include <stdio.h>

int main() {
    \\Carta1
char estado[10]; //A
char codigo[20]; //A01
char cidade[20];// Rio de Janeiro
int populacao; //2000.00
float area; // 2.000.000 km²
float PIB; //40.0000.000 bilhões
int pontos_turisticos; // 50

printf("Digite o estado:\n");
scanf("%s", &estado);

printf("Digite o codigo:\n");
scanf("%s", &codigo);

printf("Digite a cidade:\n");
scanf("%s", &cidade);

printf("Digite a populacao:\n");
scanf("%s", &populacao);

printf("Digite a area:\n");
scanf("%s", &area);

printf("Digite o PIB\n");
scanf("%s", &PIB);
printf("Digite os pontos turisticos:\n");
scanf("%s", &pontos_turisticos);


    return 0;
}
