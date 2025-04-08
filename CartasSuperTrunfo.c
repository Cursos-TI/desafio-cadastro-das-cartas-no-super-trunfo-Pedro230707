  #include <stdio.h>

  int main(){
  //Cidade 1
  int populacao1;
  float area1;
  float pib1;
  int pontosturisticos1;

  //Cidade 2
  int populacao2;
  float area2;
  float pib2;
  int pontosturisticos2;

  // Abaixo é onde as informaçõesda cidade 1 são colocadas
  printf("Digite a população da cidade 1: \n");
  scanf("%d", &populacao1);

  printf("Digite a área da cidade 1: \n");
  scanf("%f", &area1);

  printf("Digite o pib da cidade 1: \n");
  scanf("%f", &pib1);

  printf("Digite o núumero de pontos turísticos da cidade 1: \n");
  scanf("%d", &pontosturisticos1);


  // Abaixo é onde as informações da cidade 2 são colocadas
  printf(".Agora digite as informações da cidade 2 \n");

  printf("Digite a população da cidade 2: \n");
  scanf("%d", &populacao2);

  printf("Digite a área da cidade 2: \n");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade 2 \n");
  scanf("%f", &pib2);

  printf("Digite o número de pontos turísticos da cidade 2; \n");
  scanf("%d", &pontosturisticos2);

  // Abaixo é onde as informações da cidade 1 serão exibidas
  printf("Resultados da cidade 1 \n");
  printf("População: %d \n" , populacao1);
  printf("Área: %f \n" , area1);
  printf("PIB: %f \n" , pib1);
  printf("Pontos turísticos: %d \n" , pontosturisticos2);

  // Abaixo é onde as informações da cidade 2 serão exibidas
  printf("Resultados da cidade 2 \n");
  printf("População: %d \n" , populacao2);
  printf("Área: %f \n" , area2);
  printf("PIB: %f \n" , pib2);
  printf("Pontos turísticos: %d \n" , pontosturisticos2);

  return 0;

 }


