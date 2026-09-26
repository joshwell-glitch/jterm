#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{
  char buffer[256];
  char command[256];
  bool isRunning = true;

  while(isRunning)
  {
    system("whoami && pwd");
    printf("-> ");
    fgets(command, sizeof(command), stdin);

    for(int i = 0; command[i] != '\n'; i++)
    {
      printf("%c\n", command[i]);
    }

    if(strcmp(command, "exit") == 0){isRunning == 0;}
    else{printf("not quite!\n");}

    printf("%s\n", command);
    memset(command, 0, sizeof(command));
    printf("%s\n", command);
  }

  return 0;
}
