#include <stdio.h>

void main(void)
{
  // Declaração de uma variável
  int a = 10;

  printf("Valor de a: %d\n", a);

  // Declaração de um ponteiro (endereço de memória)
  int *pt_a = &a;

  printf("Endereço de a: %p\n", pt_a);

  // Acessando o valor de a através do ponteiro
  printf("Valor de a: %d\n", *pt_a);

  // Alterando o valor de a através do ponteiro
  *pt_a = 20;

  printf("Valor de a: %d\n", a);
}