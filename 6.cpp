#include <stdio.h>

#include <string.h>

#include <stdlib.h>

int main(){

           char str[]="1234567890",*s;

           s=str;

           s+=3;

           s=strnset(s,'-',3);

           s+=3;

           s=strset(s,'+');

           s-=6;

           printf("%s\n",s);

return 0; }
