#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
int main(int ac, char **av)
{
  int i =1;
   struct dirent *dr;
  DIR *director =opendir(".");
  if (director == NULL)
    {
      printf("director NOT FOUND");
      return(0);
    }
  while((dr = readdir(director)) != NULL)
    {    
      printf("%s is FOUND\n",dr->d_name);
    }while (av[i])
    {
        printf("%s:", av[i]);
        if (stat(av[i], &dr) == 0)
        {
            printf(" FOUND\n");
        }
        else
        {
            printf(" NOT FOUND\n");
        }
        i++;
    }
    closedir(director);

  return(0);
}
