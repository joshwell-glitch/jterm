#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i = 0;
  int *number = malloc(i * sizeof(int));

  if(number == NULL)
  {
    printf("Memory Allocation Failed!");
    return 1;
  }

  free(number);

  return 0;
}
