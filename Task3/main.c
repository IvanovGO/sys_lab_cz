#include <stdio.h>
int main(int argc, char ** argv, char ** envp){
puts("Implementation of Task1");
puts("Printing command line arguments:");
for (int i = 0;i<argc;i++ ) printf("Command line argument - %i is %s\n",i+1,argv[i]);
puts("Environment:");
int i=0;
while (envp[i]){
printf("%s\n",envp[i]);
i++;}
return 1;}
