#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

  int main(int argc, char ** argv){
  puts("Implementation of Task5");
  pid_t pid = fork();
  printf("Dauhter process PID=%i created\n",pid);
  char  ch[80];
  puts("Press enter to finish...");
  gets(&ch);
  return 1;}
  
  /*
  Implementation of Task5
[Detaching after fork from child process 23248]
Dauhter process PID=23248 created
Dauhter process PID=0 created

[Inferior 1 (process 23247) exited with code 01]
(gdb) 

  */
