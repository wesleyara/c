#include <stdio.h>
#include <stdlib.h>

void main(void)
{
  int *p, i;

  // Aloca memória para 5 inteiros
  p = malloc(5 * sizeof(int));

  // Verifica se a alocação foi bem sucedida
  if (p == NULL)
  {
    printf("Erro de alocação de memória\n");
    exit(1);
  }

  printf("Alocou\n");
  // Inicializa o array
  for (i = 0; i < 5; i++)
  {
    p[i] = i;
    printf("p[%d] = %d\n", i, p[i]);
  }

  // Realoca memória para 10 inteiros
  p = realloc(p, 10 * sizeof(int));

  // Verifica se a realocação foi bem sucedida
  if (p == NULL)
  {
    printf("Erro de realocação de memória\n");
    exit(1);
  }

  printf("Realocou\n");
  // Inicializa o array
  for (i = 5; i < 10; i++)
  {
    p[i] = i;
    printf("p[%d] = %d\n", i, p[i]);
  }
  // Libera a memória alocada
  free(p);

  // Atribui NULL ao ponteiro
  p = NULL;
}