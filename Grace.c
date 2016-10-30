#include<stdio.h>
#define START(x)int main(){x}
#define PATH "Grace_kid.c"
#define MODE "w+"
/*comment*/START(char*a="#include<stdio.h>%c#define START(x)int main(){x}%c#define PATH %cGrace_kid.c%c%c#define MODE %cw+%c%c/*comment*/START(char*a=%c%s%c;fprintf(fopen(PATH,MODE),a,10,10,34,34,10,34,34,10,34,a,34,10);)%c";fprintf(fopen(PATH,MODE),a,10,10,34,34,10,34,34,10,34,a,34,10);)
