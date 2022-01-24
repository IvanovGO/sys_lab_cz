
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

  int main(int argc, char ** argv){
puts("Implementation of Task15");

puts("Input commands...");
char cmnd[80];
char  path[80];
FILE * popen_result;
FILE * comm_rez;
char buff[512];


do {

printf("\n>>");
fflush(stdout);
fflush(stdin);
fgets(cmnd,80,stdin);
cmnd[strlen(cmnd)-1]=0;



   popen_result = popen(cmnd, "r");
  
   if (popen_result) {
   printf("Specify file name to write command`s execution rezults: ");
   fflush(stdout);
   fflush(stdin);
   gets(path);
   printf("%s\n",path);
   comm_rez = fopen(path,"w");
   	
         
 while(fgets(buff, sizeof(buff), popen_result)!=NULL){
        printf("%s", buff);
        fprintf(comm_rez,"%s", buff);
    }
    fclose(comm_rez);
    }
}while (strcmp(cmnd,"exit")&&strcmp(cmnd,"EXIT"));
  return 0;}
