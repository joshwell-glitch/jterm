#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{
  char command[256];
  bool isRunning = true;

  while(isRunning)
  {
    system("whoami");
    printf("-> ");
    fgets(command, sizeof(command), stdin);
    command[strcspn(command, "\n")] = '\0';

    if(strcmp(command,"exit") == 0){isRunning = 0;}
    else{printf("Uknown argument.\n");}

    memset(command, 0, sizeof(command));
    printf("\n");
  }

  return 0;
}
