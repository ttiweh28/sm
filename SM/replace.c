#include <stdio.h>
#include <string.h>
int main(void)
{
    /* char s[20] = "aaabaa";
    int i, j;
    for (i=0; s[i]!= '\0'; i++)
    {
        if (s[i] == 'b')
        {
            for (j=0; j<5; j++)
            {
                s[i+j] = 'x';
            }
        }
    }
    printf("%s\n", s);*/



 char s[20];
    int i, j;

    printf("\nenter the string\n ");
    gets(s);
   
    for (i=0; s[i]!= '\0'; i++)
    {
        if (s[i] == 'c')
        {
            for (j=0; j<5; j++)
            {
                s[i+j] = 'x';
            }
        }
    }
    printf("%s\n", s);
}