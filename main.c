#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char buffer[256];
  char command[256];

  printf("> ");
  scanf("%s", command);

  FILE *pipe = popen(command, "r");
  if (!pipe)
  {
    return 1;
  }

  do {
    while(fgets(buffer, sizeof(buffer), pipe) != NULL)
    {
      printf("%s", buffer);
    }
  }
  while(command == "exit");

  pclose(pipe);
  return 0;
}
