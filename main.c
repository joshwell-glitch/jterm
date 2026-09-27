#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{
  char command[256];
  bool isRunning = true;
  system("clear");

  while(isRunning)
  {
    system("whoami");
    printf("-> ");
    fgets(command, sizeof(command), stdin);
    command[strcspn(command, "\n")] = '\0';

    if(strcmp(command,"exit") == 0){isRunning = 0;}

    FILE *pipe = popen(command, "w");

    if(pipe == NULL){return 1;}

    memset(command, 0, sizeof(command));
    pclose(pipe);
  }

  return 0;
}
