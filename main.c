#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{
  char buffer[256];
  char command[256];
  bool isRunning = true;

  FILE *pipe = popen(command, "r");
  if (!pipe)
  {
    return 1;
  }

  while(isRunning)
  {
    system("whoami && pwd");
    printf("-> ");
    scanf(" %s", command);

    if(strcmp(command, "exit")){return 0;}

  }

  pclose(pipe);
  return 0;
}
