#include <stdio.h>
#include <string.h>

int main() {
    
 
    char estado1,estado2;                                      // Letra do estado
    char codigo1 [04],codigo2 [4];                             // Código da carta (1 letra + 2 digítos)
    char nome1 [50],nome2 [50];                                // Nome da Cidade
    int populacao1,populacao2;                                 // População
    float area1,area2;                                         // Area em km²
    float pib1,pib2;                                           // PIB
    int pontosTuristicos1,pontosTuristicos2;                   // Pontos Turisticos

    // Cadastro da primeira carta
      printf("Cadastro da Carta 1:\n");
      printf("Digite o estado: ");
      scanf(" %c", &estado1);
      printf("Digite o código da cidade (1 letra + 2 dígitos): ");
      scanf("%s", &codigo1);
      printf("Digite o nome da cidade: ");
      scanf("%s", &nome1); 
      printf("Digite a população: ");
      scanf("%d", &populacao1);
      printf("Digite a área em km²: ");
      scanf("%f", &area1);
      printf("Digite o PIB: ");
      scanf("%f", &pib1);
      printf("Digite o número de pontos turísticos: ");
      scanf("%d", &pontosTuristicos1);
    
    float pibPercapita1 = pib1/populacao1; // PIB PER CAPITA CARTA 01
    float densidadePopulacional1 = area1/populacao1; // DENSIDADE POPULACIONAL CARTA 01

    // Cadastro da segunda carta
      printf("\nCadastro da Carta 2:\n");
      printf("Digite o estado: ");
      scanf(" %c", &estado2);
      printf("Digite o código da cidade (1 letra + 2 dígitos): ");
      scanf("%s", &codigo2);
      printf("Digite o nome da cidade: ");
      scanf("%s", &nome2);
      printf("Digite a população: ");
      scanf("%d", &populacao2);
      printf("Digite a área em km²: ");
      scanf("%f", &area2);
      printf("Digite o PIB: ");
      scanf("%f", &pib2);
      printf("Digite o número de pontos turísticos: ");
      scanf("%d", &pontosTuristicos2);
      
   float pibPercapita2 = pib2/populacao2; // PIB PER CAPITA CARTA 02
   float densidadePopulacional2 = area2/populacao2; // DENSIDADE POPULACIONAL CARTA 02
   
  // Exibição dos dados da primeira carta
      printf("\nDados da Carta 1:\n");
      printf("Estado: %c\n", estado1);
      printf("Código: %s\n", codigo1);
      printf("Nome: %s\n", nome1);
      printf("População: %d\n", populacao1);
      printf("Área: %f km²\n", area1);
      printf("PIB: %f bilhões de reais\n",pib1);
      printf("Número de Pontos Turísticos: %d\n",pontosTuristicos1);
      printf("PIB PER CAPITA: %f\n",pibPercapita1);
      printf("DENSIDADE POPULACIONAL: %f\n",densidadePopulacional1);

    // Exibição dos dados da segunda carta
      printf("\nDados da Carta 2:\n");
      printf("Estado: %c\n",estado2);
      printf("Código: %s\n",codigo2);
      printf("Nome: %s\n",nome2);
      printf("População: %d\n",populacao2);
      printf("Área: %f km²\n",area2);
      printf("PIB: %f bilhões de reais\n",pib2);
      printf("Pontos Turísticos: %d\n",pontosTuristicos2);
      printf("PIB PER CAPITA: %f\n",pibPercapita2);
      printf("DENSIDADE POPULACIONAL: %f\n",densidadePopulacional2);


  // Definindo a carta vencedora usando a estrutura if-else

     if (pibPercapita1 > pibPercapita2){
      printf("Comparação de cartas (Atributo: Pib per capita)\n");
      printf("Resultado: Carta 1 Alagoas venceu!\n", pibPercapita1, pibPercapita2); } 
     else {
      printf("Comparação de cartas (Atributo: Pib per capita)\n");
      printf("Resultado: Carta 2 - SERGIPE venceu!\n", pibPercapita1, pibPercapita2); }     
  
  return 0;
}