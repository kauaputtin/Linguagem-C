
#include <stdio.h>
#include <stdlib.h>
int main(void) {
  //algoritimo de entrada
  float n1, n2, media;
  printf("Digite sua nota do primeiro bimestre: \n");
  scanf("%f", &n1);
  printf("Digite sua nota do segundo bimestre: \n");
  scanf("%f", &n2);

  media = (n1 + n2) / 2;
  printf("Sua média é: %.1f", media);
  
  
  return 0;
}