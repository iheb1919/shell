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
      /*  char *res = strstr(environ[i],"PATH");
      if (res != NULL)
      {*/
	  buf = strtok(environ[i],s);
	  if (strcmp(buf,"PATH") == 0)
	   
	    {
	      buf = strtok(NULL,"\0");
	      printf("%s\n",buf);
	      break;
	    }




 /* while (buf != NULL)
	    {
	      printf("%s\n",buf);
	      buf = strtok(NULL,s); 
	    }
	    	}*/
      i++;

    }

  return(0); 
}
