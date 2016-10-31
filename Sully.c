#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MODE "w+"
#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)
int main(void){FILE *fd;
int i = 5;
char str[50];char*a="#include<stdio.h>%c#include<stdlib.h>%c#include<string.h>%c#define MODE %cw+%c%c#define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)%cint main(void){FILE *fd;%cint i = %d;%cchar str[50];char*a=%c%s%c;if (strcmp(__FILENAME__, %cSully.c%c)){i--;}sprintf(str, %cSully_%%d.c%c, i);fd = fopen(str, MODE);fprintf(fd,a,10,10,10,34,34,10,10,10,i,10,34,a,34,34,34,34,34,34,34,34,34,10);fclose(fd);char cmd[50];sprintf(cmd, %cclang -Wall -Wextra -Werror Sully_%%d.c -o Sully_%%d%c, i, i);system(cmd);if(i > 0){sprintf(str, %c./Sully_%%d%c, i);system(str);}}%c";if (strcmp(__FILENAME__, "Sully.c")){i--;}sprintf(str, "Sully_%d.c", i);fd = fopen(str, MODE);fprintf(fd,a,10,10,10,34,34,10,10,10,i,10,34,a,34,34,34,34,34,34,34,34,34,10);fclose(fd);char cmd[50];sprintf(cmd, "clang -Wall -Wextra -Werror Sully_%d.c -o Sully_%d", i, i);system(cmd);if(i > 0){sprintf(str, "./Sully_%d", i);system(str);}}
