
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

  int main(int argc, char ** argv){
puts("Implementation of Task13");
char * en = getenv("PATH");

char * menv = (char*)malloc(sizeof(char)*strlen(en));
char sep[]=":";
char *istr;
puts("Input commands...");
char cmnd[80];
char path[80];
char *tmp = (char*)malloc(sizeof(char)*strlen(en));
FILE * popen_result;
FILE * is_there;
char buff[512];


do {//принимаем команды с стандартного ввода/вывода
strcpy(menv,en);
printf("Getenv %s\n",menv);

printf("\n>>");
fflush(stdout);
fflush(stdin);
fgets(cmnd,80,stdin);
cmnd[strlen(cmnd)-1]=0;

 istr = strtok (menv,sep);
  printf ("%s\n",istr);

   // Выделение последующих частей
   while (istr != NULL)
   {
 printf ("%s\n",istr);
 
 
 strcpy(tmp,istr);
 strcat(tmp,"/");
 strcat(tmp,cmnd);
 printf("%s\n",tmp);
 is_there=fopen(tmp,"r");
 if (is_there) break;
 istr = strtok (NULL,sep);
   }
   if (istr){
   popen_result = popen(tmp, "r");
         
 while(fgets(buff, sizeof(buff), popen_result)!=NULL){
        printf("%s", buff);
    }
    
  if (popen_result) pclose(popen_result);
   if (is_there) fclose(is_there);  

}


}while (strcmp(cmnd,"exit")&&strcmp(cmnd,"EXIT"));
  return 0;}
