
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    /* loop over a string using subscript*/
    char *s = "String in C";
    char* ps = s;
    while(*ps != '\0')
    {
        printf("%c",*ps);
    ps++;
    }
}