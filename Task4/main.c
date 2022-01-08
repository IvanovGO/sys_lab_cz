#include <stdio.h>
#include <unistd.h>
  int main(int argc, char ** argv){
  puts("Implementation of Task4");
 char arg1[]="First argument";
 char arg2[]="Second argument";
 char arg3[]="Third argument";
 printf("Process returns %i\n",execl( "proc", &arg1, &arg2, &arg3,NULL ));
 puts("Return to mother process");
  return 1;}
