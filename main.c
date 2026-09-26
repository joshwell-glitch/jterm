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
    printf("%s\n", command);
    system("whoami && pwd");
    printf("-> ");
    fgets(command, sizeof(command), stdin);

    if(strcmp(command, "exit") == 0){isRunning = 0;}
    else{printf("not quite!\n");}

    memset(command, 0, sizeof(command));
  }

  return 0;
}
