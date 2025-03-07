#include <stdio.h>


int main(){
  char linha[10]= {'A','B','C','D','E','F','G','H','I','J'};
  
  int Local[10][10] = {
    {0,0,0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,0,0,},
    {0,0,0,3,0,0,0,0,0,0,},
    {0,0,0,3,0,0,0,0,0,0,},
    {0,0,0,3,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,0,0,0,0,},
    {0,0,0,0,0,0,3,3,3,0,},
    { 0,0,0,0,0,0,0,0,0,0},
  };
  printf("BATALHA NAVAL\n");

  printf(" A B C D E F G H I J\n");
  printf("{0,0,0,0,0,0,0,0,0,0},\n");
  printf("{0,0,0,0,0,0,0,0,0,0},\n");
  printf("{0,0,0,0,0,0,0,0,0,0},\n");
  printf("{0,0,3,0,0,0,0,0,0,0},\n");
  printf("{0,0,3,0,0,0,0,0,0,0},\n");
  printf("{0,0,3,0,0,0,0,0,0,0},\n");
  printf("{0,0,0,0,0,0,0,0,0,0},\n");
  printf("{0,0,0,0,0,0,0,0,0,0},\n");
  printf("{0,0,0,0,0,0,3,3,3,0},\n");
  printf("{0,0,0,0,0,0,0,0,0,0},\n");




  for(int j = 1 ; j <= 1; j++){
    for(int i = 1; i <= 1; i++)
    printf("O elemento na posição [5][C] é %d\n", Local[3][3]);
    printf("O elemento na posição [4][C] é %d\n", Local[3][3]);
    printf("O elemento na posição [3][C] é %d\n", Local[3][3]);
    printf("O elemento na posição [9][G] é %d\n", Local[3][3]);
    printf("O elemento na posição [8][H] é %d\n", Local[3][3]);
    printf("O elemento na posição [9][I] é %d\n", Local[3][3]);
   } 

   for(int j = 1 ; j <= 1; j++){
    for(int i = 1; i <= 1; i++)
    printf(" posiçao %c\n",linha[2]);
    printf(" posiçao %c\n",linha[2]);
    printf(" posiçao %c\n",linha[6]);
    printf(" posiçao %c\n",linha[7]);
    printf(" posiçao %c\n",linha[8]);
   } 
 
  

}
