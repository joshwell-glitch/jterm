#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
    printf("$USER");
    printf("> ");
    scanf(" %s", command);

    if(command == "exit"){isRunning = false; break;}

    do
    {
      while(fgets(buffer, sizeof(buffer), pipe) != NULL)
      {
        printf("%s", buffer);
      }
    }
    while(command != "exit");
    command[0] = '\0';
  }

  pclose(pipe);
  return 0;
}
