#include <stdio.h>
#include "stdio.h"
#include <stdlib.h>
#include <string.h>

int main(){
    char Str[100], temp;
    int i,j,len;

    printf("\n Please Enter a String");
    gets(Str);

    len= strlen(Str)-1;

    for(i=0; i<strlen(Str); i++){
        temp = Str[i];
        Str[i] = Str[len];
        Str[len--] = temp;
    }
     printf("\n String after reverse is %s", Str);
     return 0;
}