#!/usr/bin/sh
echo "Creating"
for i in "Task"{1..15}
do
  echo "$i created" 
  mkdir $i
  cd $i
  echo "#include <stdio.h>
  int main(int argc, char ** argv){
  puts(\"Implementation of $i\");
  return 1;}">main.c
  echo "all:
	gcc main.c -o $i -Wall -Wpedantic -g">>Makefile
  make
  ./$i
  cd ..
done

