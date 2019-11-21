#include <stdio.h>
#include <unistd.h>

int main(void)
{
extern  char **environ;
  int i = 0;
  //   while(environ[i]){
    printf("%s\n",environ[30]);
 printf("%s\n%s\n",environ[30][1]);
    //    i++;}
}
