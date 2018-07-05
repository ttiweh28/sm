#include <stdio.h>
#include "stdio.h"
#include <stdlib.h>
#include <string.h>



char *reverse_string(char *str);

int main(){
     char *string;
     char *temp;
     printf("\n Enter the string\n");
     gets(string);

     temp=string;
    
     printf("The reverse is %s",reverse_string(string));
     
    
    
}
 //fuction definition to reverse string
    char *reverse_string(char *str){

        if(*str==0){
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
