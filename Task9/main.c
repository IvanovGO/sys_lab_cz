#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


 
int main(int argc, char ** argv){
   puts("Implementation of Task9");    
   int a=7;
   printf("Parent process var a=%i\n",a);
   pid_t pid = fork();
   printf("Child process var a=%i\n",a);
   a++;
   printf("Changed child process var a=%i\n",a);
return 1;}
