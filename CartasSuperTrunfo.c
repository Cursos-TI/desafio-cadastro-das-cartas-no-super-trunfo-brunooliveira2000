#include <stdio.h>

int main (){
   //carta 1
   char cidade1[50]; 
   char estado1;
   char codigo1[5];
   int populacao1; 
   int turistico1;
   float area1;
   float pib1;

   //carta 2
   char cidade2[50];
   char estado2;
   char codigo2[5];
   int populacao2; 
   int turistico2;
   float area2;
   float pib2;

   printf("Bem-vindo ao Super Trunfo, você precisará cadastrar 2 cartas. \n");
   
   printf("\n ---Carta 1--- \n"); //carta 1

     printf("Digite o Estado (A-H): ");
     scanf("%c", &estado1 );

     printf("Digite o código da carta (A01-A08): ");
     scanf("%s", &codigo1 );

     printf("Digite o nome da cidade: ");
     scanf("%s", &cidade1 );

     printf("Digite a população: ");
     scanf("%d", &populacao1 );
     
     printf("Digite a quantidade de pontos turísticos: ");
     scanf("%d", &turistico1 );
     
     printf("Digite a área em km²: ");
     scanf("%f", &area1 );

     printf("Digite o Pib: ");
     scanf("%f", &pib1 );

     printf("\n Carta 1 criada com sucesso!\n");

  printf("\n---Carta 2--- \n"); //carta 2

     printf("Digite o Estado (A-H): ");
     scanf(" %c", &estado2 );

     printf("Digite o código da carta (B01-B08): ");
     scanf("%s", &codigo2 );

     printf("Digite o nome da cidade: ");
     scanf("%s", &cidade2 );

     printf("Digite a população: ");
     scanf("%d", &populacao2 );

     printf("Digite a quantidade de pontos turísticos: ");
     scanf(" %d", &turistico2 );

     printf("Digite a área em km²: ");
     scanf(" %f", &area2 );

     printf("digite o Pib: ");
     scanf(" %f", &pib2 );

     printf("Carta 2 criada com sucesso! \n");

   printf("\n Exibição de cartas: \n"); // exibindo as duas cartas

    printf("\n ---carta 1--- \n");
    printf("Estado: %c \n", estado1);
    printf("código da carta: %s \n", codigo1);
    printf("nome: %s \n", cidade1);
    printf("população: %d \n", populacao1);
    printf("pontos turísticos: %d \n", turistico1);
    printf("área: %f \n", area1);
    printf("PIB: %f \n", pib1);

    printf("\n ---carta 2--- \n");
    printf("Estado: %c \n", estado2);
    printf("código da carta: %s \n",codigo2);
    printf("nome: %s \n", cidade2);
    printf("população: %d \n", populacao2);
    printf("pontos turísticos: %d \n", turistico2);
    printf("área: %f \n", area2);
    printf("PIB: %f \n", pib2);

    return 0;
}