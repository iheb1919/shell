#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main(void)

{
  char str[100];
  char s[1] = " ";
  char *stok;
  char *buf;
  size_t size = 100;
  size_t line;
  buf =(char *)malloc (size * sizeof(char));
  if (buf == NULL)
    { 
   printf(" nothing to print");
  exit(1);
}
  printf("$");
  line = getline(&buf, &size, stdin);

  stok = strtok(buf, s);
  while (stok != NULL)
    {
  printf("%s\n",stok);
  stok = strtok(NULL,s);  
 }
}
