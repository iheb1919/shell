#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
char *_getenv(const char *name)
{

  return(0);
}

int main(void)
{
  extern  char **environ;
  char *buf;
  char *stok;
  size_t size = 50;
  char s[1] = "=";
  int i = 0;
  buf = malloc(size * sizeof(char));
  while(environ[i]) 
    {
  
      buf = strtok(environ[i],s);
      if (strcmp(buf,"PATH") == 0)
	   
	{
	  buf = strtok(NULL,"\0");
	  stok = strtok(buf,":");
	  while(stok != NULL)
	    {
	      printf("%s\n",stok);
	      stok = strtok(NULL,":");
	    }
	      
	}

      i++;

    }

  return(0); 
}
