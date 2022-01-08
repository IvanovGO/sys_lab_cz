#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <dirent.h>
#define MAXDIR 80
int main(int argc, char ** argv){
puts("Implementation of Task10");
char dir[MAXDIR];
getcwd(dir, MAXDIR);
printf("Parent current directory is %s\n", dir);
pid_t pid = fork();
puts("chdir  to ..");
chdir("..");
getcwd(dir, MAXDIR);
printf("Child current directory is %s\n", dir);

return 1;}
