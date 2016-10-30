#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MODE "w+"
int main(){

char file[15];int i = 5;char*a="#include<stdio.h>%c#include<stdlib.h>%c#define MODE %cw+%c%cint main(){char file[15];int i = %d;
  char*a=%c%s%c;fprintf(fopen(%cSully_%d.c%c,MODE),a,10,10,34,34,10,i-1,34,a,34,34,i-1,34,i-1,34,i-1,i-1,34,34,i-1,34,10);
  system(%cclang -Wall -Wextra -Werror Sully_%d.c -o Sully_%d%c);if(i > 0){system(%c./Sully_%d%c);}}%c";

sprintf(file, "Sully_%d.c", 5);
fprintf(fopen(file,MODE),a,10,10,34,34,10,i,34,a,34,34,i,34,i,34,i,i,34,34,i,34,10);
system("clang -Wall -Wextra -Werror Sully_5.c -o Sully_5");

if(i > 0){system("./Sully_5");}}
