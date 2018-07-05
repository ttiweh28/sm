
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    /* loop over a string using subscript*/
    char *s[] = {'s','t','o','p','/0'};
    char* ps = s;
    char s2[strlen];
    /*printf("\n enter the string\n");
    gets(s);*/
    while(*ps != '\0')
    {
        strcpy(s2,&s[2]);
        printf("%c",s2);
        ps++;
    }
}