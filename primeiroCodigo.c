#include <stdio.h>

// definir as variáveis

int main (){
  char cidadeA[50], cidadeB[10];
  int populacaoA, populacaoB;
  float areaA, areaB;
  float pibA, pibB;
  int pontosTuristicosA, pontosTuristicosB;
  float pibPerA, pibPerB;
  float densidadePopA, densidadePopB;


  //interação com o usuário

  printf("Digite o nome da cidade A\n");
  scanf("%s", cidadeA);

  printf("Digite o nome da cidade B\n");
  scanf("%s", cidadeB);

  printf("População do estado A\n");
  scanf("%d", &populacaoA);

  printf("População do estado B\n");
  scanf("%d", &populacaoB);

  printf("Area do estado A\n");
  scanf("%f", &areaA);

  printf("Area do estado B\n");
  scanf("%f", &areaB);

  printf("PIB do estado A\n");
  scanf("%f", &pibA);

  printf("PIB do estado B\n");
  scanf("%f", &pibB);

  printf("Pontos turísticos do estado A\n");
  scanf("%d", &pontosTuristicosA);

  printf("Pontos turísticos do estado B\n");
  scanf("%d", &pontosTuristicosB);

  // calculo da densidade populacional e o pib per capta
   densidadePopA = populacaoA / areaA;
   densidadePopB = populacaoB / areaB;
   pibPerA = pibA / populacaoA;
   pibPerB = pibB / populacaoB;



  //comparação entre as cidades

  printf("----------ESTADO A----------\n");

  printf("Nome da cidade A: %s\n", cidadeA);
  printf("População da cidade A: %d\n", populacaoA);
  printf("Area do cidade A: %f\n", areaA);
  printf("PIB do cidade A: %f\n", pibA );
  printf("Pontos turísticos da cidade A: %d\n", pontosTuristicosA);
  printf("Densidade populacional da cidade A: %.2f\n", densidadePopA);
  printf ("PIB per Capta da cidade A: %.2f\n", pibPerA);

  printf("----------ESTADO B----------\n");

  printf("Nome da cidade B: %s\n", cidadeB);
  printf("Populacao da cidade B: %d\n", populacaoB);
  printf("Area da cidade B: %f\n", areaB);
  printf("PIB da cidade B: %f\n", pibB );
  printf("Pontos turisticos da cidade B: %d\n", pontosTuristicosB);
  printf("Densidade populacional da cidade B: %.2f\n", densidadePopB);
  printf ("PIB per Capta da cidade B: %.2f\n", pibPerB);

  return 0;
}