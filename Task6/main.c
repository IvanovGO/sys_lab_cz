#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

  int main(int argc, char ** argv){
  puts("Implementation of Task6");
  for (int i = 0; i<argc;i++){printf("Parent arg No%i is %s\n",i,argv[i]); }
  pid_t pid = fork();
  printf("Dauhter process PID=%i created\n",pid);
  for (int i = 0; i<argc;i++){printf("Daughter arg No%i is %s\n",i,argv[i]); }
  char  ch[80];
  puts("Press enter to finish...");
  gets(&ch);
  return 1;}
  

