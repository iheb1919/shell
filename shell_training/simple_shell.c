#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int main( void)
{
  int T = 1;
  char *buf;
  char *argv[]={"ls",NULL};
  char *env[]={"/tmp",NULL};
  int x,i;
  char *c;
  size_t size = 50;

  while(T==1)
    {
      /*---------- buf check-----------*/
      buf =(char *)malloc (size * sizeof(char));
 c =(char *)malloc (size * sizeof(char));
      if (buf == NULL)
	{ 
	  printf(" nothing to print");
	  exit(1);
	}
      printf("#cisfun$ ");
      /*------- bech te5ou ligne ------- */
      getline(&buf, &size, stdin);
      /*----------- bech t7ot buf f c -------------*/     
      for(i=0;buf[i]!='\0';i++)      
	c[i] = buf[i];


  if (strcmp(c,"pid_max")==10)
	{
	  printf("118888888888888888888888888888888888888888881111111");
	    x =  execve("pid_max",argv ,env);
	   
	} 
      else if (strcmp(c,"./fwe")==10)
	{
	  printf("222222222");
	  x =  execve("./fwe",argv ,env);
	  while(x)
	    printf("7keyq");
        
	} 
      else if (strcmp(c,"./exec")==10)
	{
	  printf("333333");
	   execve("./exec",argv ,env);
        
	  printf("rqni mchiiiiiiiiiiiiiiiiiiiit");
	} 
      else if (strcmp(c,"./getline")==10)
	{
	  x =  execve("./getline",argv ,env);
	  printf("ret execve = %d\n",x);
	} 
      else if (strcmp(c,"./pid")==10)
	{
	  x =  execve("./pid",argv ,env);
	  printf("ret execve = %d\n",x);
	} 
      else if (strcmp(c,"./mypid")==10)
	{
	  x =  execve("./mypid",argv ,env);
	  printf("ret execve = %d\n",x);
	} 
      else if (strcmp(c,"./prompt")==10)
	{
	  x =  execve("./prompt",argv ,env);
	  printf("ret execve = %d\n",x);
	} 
      else if (strcmp(c,"./pid_max")==10)
	{
	  x =  execve("./pid_max",argv ,env);
	  printf("ret execve = %d\n",x);
	} 
      else if (strcmp(c,"./print")==10)
	{
	  x =  execve("./print",argv ,env);
	  printf("ret execve = %d\n",x);
	} 
      else {
	printf("command invalid\n");
	}
     
	
  printf("kjkjkjhkjhkjhkjhkjhkjhkjh");  
    }
  return(0);
}
