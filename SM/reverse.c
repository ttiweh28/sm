#include <stdio.h>
#include "stdio.h"
#include <stdlib.h>
#include <string.h>



char *reverse_string(char *str);
char *double_string(char *str);

int main(){
     char *string;
     char *temp;
     printf("\n Enter the string\n");
     gets(string);

     temp=string;
     printf("%s \n",temp);
     printf("The reverse is %s", temp, reverse_string(string));
     printf("\n\n");
     printf("The double is %s", temp, double_string(temp));
     
    
    
}
 //fuction definition to reverse string
    char *reverse_string(char *str){

        if(str==0){
            return NULL;
        }
        if(*str==0){
            return NULL;
        }
          char *beginning=str;
         char *end=beginning + strlen(str)-1;
            char temp;

            while(end>beginning){

                temp=*beginning;
                *beginning=*end;
                *end=temp;
                ++beginning;
                --end;
            }
    }

  char *double_string(char *str){
       
       char *duplicate;

     if(str==0){
            return NULL;
        }
        if(*str==0){
            return NULL;
        }

        duplicate=strdup(str);
        strcat(str,duplicate);
        return str;
  }
