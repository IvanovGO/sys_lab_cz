#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

  int main(int argc, char ** argv, char ** envp){
  puts("Implementation of Task6");
  int i=0;
while (envp[i]){
printf("Parent PID=%i env[%i]= %s\n",getpid(),i,envp[i]);
i++;}
  pid_t pid = fork();
 int  j=0;
while (envp[j]){
printf("Daughter PID=%i env[%i] %s\n",pid,j,envp[j]);
j++;}
  
  printf("Parent has %i env variables, and daughter has %i variables\n",i,j);
  
  return 1;
  }
