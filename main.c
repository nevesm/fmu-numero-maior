#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    int n2;

    printf("FACULDADE METROPOLITANAS UNIDAS");
    printf(" \n");
    printf(" \n");
    printf("APS - LOGICA DE PROGRAMACAO - 1º SEMESTRE");
    printf(" \n");
    printf(" \n");
    printf("Desenvolvedor: Marcus Neves\n");
    printf("RA: 6932681\n");
    printf("Contato: marcus-neves@outlook.com\n");
    printf(" \n");
    printf("******************\n");
    printf("*fmu-numero-maior*\n");
    printf("******************\n");
    printf(" \n");
        printf("MENU PRINCIPAL\n");
        printf(" \n");
        printf("\nDigite o primeiro número:");
        scanf("%d",&n1);
        printf("\nDigite o segundo número:");
        scanf("%d",&n2);
      if(n1>n2){
          printf("\nO MAIOR É: %d\n", n1);
      }
      if(n1<n2){
          printf("\nO MAIOR É: %d\n", n2);
      }
      if(n1==n2){
          printf("\nOS NÚMEROS SÃO IGUAIS!\n");
      }
}