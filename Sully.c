#include<stdio.h>
#include<stdlib.h>
#define MODE "w+"
int main(){int i = 5;char*str;
  char*a="#include<stdio.h>%c#include<stdlib.h>%c#define MODE %cw+%c%cint main(){int i = %d;char*a=%c%s%c;
    fprintf(fopen(%cSully_%d.c%c,MODE),a,10,10,34,34,10,i,34,a,34,34,i-1,34,34,i-1,i-1,34,34,i-1,34,10);
    system(%cclang -Wall -Wextra -Werror Sully_%d.c -o Sully_%d%c);
    if(i > 0){system(%c./Sully_%d%c);}}%c";
  sprintf(str, "Sully_%d", i);
  fprintf(fopen(str,MODE),a,10,10,34,34,10,i,34,a,34,34,i-1,34,34,i-1,i-1,34,34,i-1,34,10);
  sprintf(str, "clang -Wall -Wextra -Werror Sully_5.c -o Sully_5", i, i);
  system(str);if(i > 0){sprintf(str, "Sully_%d", i);system(str);}}
