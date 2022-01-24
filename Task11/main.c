#include <stdio.h>
#include <stdlib.h>
  int main(int argc, char ** argv){puts("Implementation of Task11");
  
FILE *fp;
if ( (fp=fopen("test", "w"))==NULL) {
printf ("Cannot open file.\n");
exit(1);}

fprintf(fp,"Parent process PID=%i\n",getpid());

pid_t pid = fork();

fprintf(fp,"Child process PID=%i\n",getpid());


  
  return 1;}
