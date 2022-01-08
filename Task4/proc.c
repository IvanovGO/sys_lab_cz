#include <stdio.h>
int main(int argc, char ** argv){
puts("Called process is running.");
puts("Printing transferred command line arguments:");
for (int i = 0;i<argc;i++ ) printf("Command line argument - %i is %s\n",i+1,argv[i]);


return 1;}
