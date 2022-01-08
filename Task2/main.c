#include <stdio.h>
#include <unistd.h>
  int main(int argc, char ** argv, char ** envp){
  puts("Implementation of Task2");
 const char  fake_proc_name[]="fake";
 char ** args = NULL;
  char ** envs = NULL;
 printf("Process %s returns %i\n",fake_proc_name,execve( &fake_proc_name, args,envs ));
 puts("Returned to mother process");    
 const char  real_proc_name[]="proc";
 printf("Process %s returns %i\n",real_proc_name,execve( &real_proc_name, args,envs ));
  puts("Returned to mother process");    
  return 1;}
