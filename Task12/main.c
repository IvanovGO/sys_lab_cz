
#include <string.h>
#include <stdio.h>

  int main(int argc, char ** argv){
  puts("Implementation of Task12");
  
puts("Input commands...");
char cmnd[80];

do {//принимаем команды с стандартного ввода/вывода
printf("\n>>");
fflush(stdout);
fflush(stdin);
fgets(cmnd,80,stdin);
cmnd[strlen(cmnd)-1]=0;
system(cmnd);
}while (strcmp(cmnd,"exit")&&strcmp(cmnd,"EXIT"));
  return 1;}
