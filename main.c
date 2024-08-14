/*
Escrever um algoritmo em C que leia a comprimento de uma (1) barra em centímetro e exiba na tela sua dimensão em:

Polegadas
pés
Sabendo que, 1 Polegada = 2.54 Centímetros = 0.08 pés (ft).
*/

#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

int main(void) {
  float comprimento, polegada, pes;
  printf("Digite o comprimento da barra em (cm): ");
  scanf("%f", &comprimento);
  //cálculos 
  polegada = comprimento / 2.54;
  pes = comprimento * 0.08 / 2.54;
  //exibição
  printf("Dimensões da Barra: \n");
  printf("Polegadas: %.2f\n", polegada);
  printf("Pés: %.2f\n", pes);
  
  return 0;
}
