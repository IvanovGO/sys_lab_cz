#include <stdio.h>
int main(int argc, char ** argv, char ** envp){
puts("Implementation of Task1");
int i=0;
while (envp[i]){
printf("%s\n",envp[i]);
i++;}
return 1;}
