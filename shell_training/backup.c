#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
int main( void)
{
  int T = 1;
  char *buf;
  //char *argv[]={};
    char *env[2];
  int x,i;
  char *c, *token = NULL, *cmd, *path;
  size_t size = 500;

 
  
      /*---------- buf check-----------*/
      buf =(char *)malloc (size * sizeof(char));
 c =(char *)malloc (size * sizeof(char));
  
 while(T==1)
  {
      printf("#cisfun$ ");
      /*------- bech te5ou ligne ------- */
      getline(&buf, &size, stdin);
      /*----------- bech t7ot buf f c -------------     
      for(i=0;buf[i]!='\0';i++)      
      c[i] = buf[i];*/
      
      strcpy(c, buf);
     
    /*---------------- fork()-----------*/
      
      /*  printf(" father pid %d AND child pid %d\n",getpid(),child);*/

      /*-----------chose commande -----------------*/
      token = strtok(c, "\n");
      path =(char *)malloc (size * sizeof(char));
      strcpy(path, token);
   
      token = strtok(buf, "/");
      cmd = malloc(sizeof(token));
      while(token != NULL)
	{
	  cmd = token;
	  token = strtok(NULL, "/");
	}

      env[0] = cmd;
      env[1] = NULL;

      x = fork();
      if (x == 0)
	execve(path, env, NULL);
      else if (x > 0)
	wait(0);
    }
  return(1);
}
