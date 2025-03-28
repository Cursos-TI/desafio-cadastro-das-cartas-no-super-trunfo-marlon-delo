#include <stdio.h>
int main (){

    char estado [20] ;
    char codigo_da_carta [20];
    char cidade [20];
    int populacao1 ;
    float pib1;
    int ponto_turistico[20];
    float area1;
    printf("digite seu estado:");
    scanf("%s", estado);
    
    printf("digite o codigo da carta:");
    scanf("%s", codigo_da_carta);
    
    printf("digite a cidade:");
    scanf("%s", cidade);
    
    printf("digite a população:");
    scanf("%d", &populacao1);
    
    printf("digite o pib:");
    scanf("%f", &pib1);
    
    printf("digite o numero de pontos turisticos:");
    scanf("%d", ponto_turistico);
    
    printf("digite a area da cidade:");
    scanf ("%f", &area1);
    float densidade1 =  populacao1 / area1 ;

    float pib_percapita = pib1 / populacao1;
    
  printf ("a densidade é: %f\n", densidade1);
printf(" o pib percapita é: %f\n", pib_percapita);




    printf("cidade 2\n");
    //cidade 2
    char estado2 [20] ;
    char codigo_da_carta2 [20];
    char cidade2 [20];
    int populacao2 ;
    float pib2 ;
    int ponto_turistico2[20];
    float area2;
    printf("digite seu estado:");
    scanf("%s", estado2);
    
    printf("digite o codigo da carta:");
    scanf("%s", codigo_da_carta2);
    
    printf("digite a cidade:");
    scanf("%s", cidade2);
    
    printf("digite a população:");
    scanf("%d", &populacao2);
    
    printf("digite o pib:");
    scanf("%f", &pib2);
    
    printf("digite o numero de pontos turisticos:");
    scanf("%d",& ponto_turistico2);
    printf("digite a area da cidade:");
    scanf ("%f", &area2);

    float densidade2 =  populacao2 / area2 ;

    float pib_percapita2 = pib2 / populacao2;
    
  printf ("a densidade é: %f\n", densidade2);
printf(" o pib percapita é: %f\n", pib_percapita2);


if (area1 > area2){
     printf("Area da carta 1 é maior que da carta 2\n");
}else{
  printf ("area da carta 1 é menor que a da carta 2");
}

if (populacao1 > populacao2){
    printf ("população da carta 1 é maior que da carta 2\n");
} else {
printf("a população da carta 1 é menor que a da carta 2.\n");
}

if (pib1 > pib2){
     printf("o pib da carta 1 é maior que da carta 2\n");       
} else {
      printf("o pib da carta 1 é menor que a da carta2\n ");
}

if (ponto_turistico > ponto_turistico2){
     printf ("o  numero ponto turistico da carta 1 é maior que o da carta 2\n");
}else{
  ("o numero de pontos turisticos da carta 1 é menor que da carta 2\n");
}
if (pib_percapita > pib_percapita2){
    printf ("o pib percapita da carta 1 é maior que o da carta 2\n");
}else{
  printf ("o pib percapita da carta 1 é maior que o da carta 2\n");
}


if (densidade1 > densidade2){
    printf ("A densidade populaçional da carta 1 é maior que a da carta 2\n");
}else{
  printf("A densidade populaçional da carta 1 é menor que a da carta 2\n");
}



































}