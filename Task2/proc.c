#include <stdio.h>
#include <string.h>

  int main(int argc, char ** argv){
  puts("Daughter process runned (press Enter to proceed)");
  char  ch[80];
  gets(&ch);
  return strlen(ch);}
