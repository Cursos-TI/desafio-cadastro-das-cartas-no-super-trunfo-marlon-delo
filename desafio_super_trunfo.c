#include <stdio.h>
#include <stdlib.h>
int main (){

    char estado [20] ;
    char codigo_da_carta [20];
    char cidade [20];
    int populacao1 ;
    float pib1;
    int ponto_turistico[20];
    float area1;
    int atributo1, atributo2;
    int cadastrar;
    int resultado1, resultado2;





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

//*****************MENU*************************
atributo1 = 0;
atributo2 = 0;

printf ("Escolha um dos atributos a ser comparado:\n");
printf ("1. população;\n");
printf ("2. area;\n");
printf ("3. PIB;\n");
printf ("4. Numero de pontos turisticos;\n");
printf ("5. Densidade demografica;\n");
scanf ("%d", &atributo1);

//escolha do segunod atributo:
printf ("escolha o segundo atributo a ser comparado");
//Logica para o usuario não escolher o memso atributo:
printf(atributo1 == 1 ?"\n : ", 1.populacao;\n );
printf("atributo1");
printf("atributo1");
printf("atributo1");
printf("atributo1");



















































}