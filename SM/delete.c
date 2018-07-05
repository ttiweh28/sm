#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 void delete_char(char *str, int i);
int main()
{
   char word = "abcdef";
   char word2[10];
    
//    strcpy(word2,&word[4]);

    char try[] = delete_char(*word, 2);

    printf (try);

   return 0;
}
    void delete_char(char *str, int i)
    {
        int len = strlen(str);
        for(;i<len -1); i++)
        {
            str[i] = str[i+1];
        }
        str[i] = '\0';

        return str;
    }
