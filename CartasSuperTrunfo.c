#include <stdio.h>

int main (){
   // Carta 1
   char cidade1[50]; 
   char estado1;
   char codigo1[5];
   int populacao1; 
   int turistico1;
   float area1;
   float pib1;
   float densidade_populacional1;
   float pib_per_capita1;
   
   // Carta 2
   char cidade2[50];
   char estado2;
   char codigo2[5];
   int populacao2; 
   int turistico2;
   float area2;
   float pib2;
   float densidade_populacional2;
   float pib_per_capita2;
 
   printf("Bem-vindo ao Super Trunfo, você precisará cadastrar 2 cartas. \n");
   
   printf("\n ---Carta 1--- \n");

   printf("Digite o Estado (A-H): ");
   scanf(" %c", &estado1 );

   printf("Digite o código da carta (A01-A08): ");
   scanf("%s", codigo1 );

   printf("Digite o nome da cidade: ");
   scanf("%s", cidade1 );

   printf("Digite a população: ");
   scanf("%d", &populacao1 );
     
   printf("Digite a quantidade de pontos turísticos: ");
   scanf("%d", &turistico1 );
     
   printf("Digite a área em km²: ");
   scanf("%f", &area1 );

   printf("Digite o PIB: ");
   scanf("%f", &pib1 );

   // cálculos
   densidade_populacional1 = populacao1 / area1;
   pib_per_capita1 = pib1 / populacao1;

   printf("\nCarta 1 criada com sucesso!\n");

   // Carta 2
   printf("\n---Carta 2--- \n");

   printf("Digite o Estado (A-H): ");
   scanf(" %c", &estado2 );

   printf("Digite o código da carta (B01-B08): ");
   scanf("%s", codigo2 );

   printf("Digite o nome da cidade: ");
   scanf("%s", cidade2 );

   printf("Digite a população: ");
   scanf("%d", &populacao2 );

   printf("Digite a quantidade de pontos turísticos: ");
   scanf("%d", &turistico2 );

   printf("Digite a área em km²: ");
   scanf("%f", &area2 );

   printf("Digite o PIB: ");
   scanf("%f", &pib2 );

   // cálculos
   densidade_populacional2  = populacao2 / area2;
   pib_per_capita2 = pib2 / populacao2;

   printf("Carta 2 criada com sucesso!\n");

   // Exibição das cartas
   printf("\n ---Exibição das Cartas--- \n");

   printf("\n---Carta 1---\n");
   printf("Estado: %c\n", estado1);
   printf("Código da carta: %s\n", codigo1);
   printf("Nome: %s\n", cidade1);
   printf("População: %d\n", populacao1);
   printf("Pontos turísticos: %d\n", turistico1);
   printf("Área: %.2f km²\n", area1);
   printf("PIB: %.2f\n", pib1);
   printf("Densidade populacional: %.2f\n", densidade_populacional1);
   printf("PIB per capita: %.2f\n", pib_per_capita1);
   
   printf("\n---Carta 2---\n");
   printf("Estado: %c\n", estado2);
   printf("Código da carta: %s\n", codigo2);
   printf("Nome: %s\n", cidade2);
   printf("População: %d\n", populacao2);
   printf("Pontos turísticos: %d\n", turistico2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: %.2f\n", pib2);
   printf("Densidade populacional: %.2f\n", densidade_populacional2);
   printf("PIB per capita: %.2f\n", pib_per_capita2);

   // Batalha Super Trunfo
   int escolha;
   printf("\nEscolha um atributo para comparar:\n");
   printf("1 - População\n");
   printf("2 - Pontos turísticos\n");
   printf("3 - Área\n");
   printf("4 - PIB\n");
   printf("5 - Densidade populacional\n");
   printf("6 - PIB per capita\n");
   printf("Escolha: ");
   scanf("%d", &escolha);

   printf("\n--- Resultado da Batalha ---\n");

   switch(escolha){
      case 1:
         printf("População: carta 1 = %d | carta 2 = %d\n", populacao1, populacao2);
         if (populacao1 > populacao2) printf("Carta 1 venceu!\n");
         else if(populacao1 < populacao2) printf("Carta 2 venceu!\n");
         else printf("Empate!\n");
         break;

      case 2:
         printf("Pontos turísticos: carta 1 = %d | carta 2 = %d\n", turistico1, turistico2);
         if (turistico1 > turistico2) printf("Carta 1 venceu!\n");
         else if(turistico1 < turistico2) printf("Carta 2 venceu!\n");
         else printf("Empate!\n");
         break;

      case 3:
         printf("Área: carta 1 = %.2f | carta 2 = %.2f\n", area1, area2);
         if (area1 > area2) printf("Carta 1 venceu!\n");
         else if(area1 < area2) printf("Carta 2 venceu!\n");
         else printf("Empate!\n");
         break;

      case 4:
         printf("PIB: carta 1 = %.2f | carta 2 = %.2f\n", pib1, pib2);
         if (pib1 > pib2) printf("Carta 1 venceu!\n");
         else if(pib1 < pib2) printf("Carta 2 venceu!\n");
         else printf("Empate!\n");
         break;

      case 5:
         printf("Densidade populacional: carta 1 = %.2f | carta 2 = %.2f\n", densidade_populacional1, densidade_populacional2);
         if (densidade_populacional1 < densidade_populacional2) printf("Carta 1 venceu!\n");
         else if(densidade_populacional1 > densidade_populacional2) printf("Carta 2 venceu!\n");
         else printf("Empate!\n");
         break;

      case 6:
         printf("PIB per capita: carta 1 = %.2f | carta 2 = %.2f\n", pib_per_capita1, pib_per_capita2);
         if (pib_per_capita1 > pib_per_capita2) printf("Carta 1 venceu!\n");
         else if(pib_per_capita1 < pib_per_capita2) printf("Carta 2 venceu!\n");
         else printf("Empate!\n");
         break;

      default:
         printf("Opção inválida!\n");
   }

   return 0;
}