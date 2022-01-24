
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <dirent.h>
#include <stdlib.h>

  int main(int argc, char ** argv){
  puts("Implementation of Task12");
  printf("Command CD chdir into %s\n",argv[1]);
puts("Input commands...");
char cmnd[80];

do {//принимаем команды с стандартного ввода/вывода
printf("\n>>");
fflush(stdout);
fflush(stdin);
fgets(cmnd,80,stdin);
cmnd[strlen(cmnd)-1]=0;
if (!strcmp(cmnd,"CD")){
	chdir(argv[1]);
	}else {system(cmnd);}
}while (strcmp(cmnd,"exit")&&strcmp(cmnd,"EXIT"));
  return 0;}
