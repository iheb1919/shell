#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  char *buf = NULL;
  size_t size = 10;
  printf("$");
  getline(&buf, &size, stdin);
  printf("%s",buf);
}

