#include <stdio.h>
#include "stdio.h"
#include <stdlib.h>
#include <string.h>
 
 //fuction declaration
 char *reverse_string(char *str);

int main(){
     char *string; //pointer to the string entered
     char *temp;    //temporary storage
     printf( "Enter the string\n");
     gets(string);

     temp=string;

     printf("The reverse is %s", temp, reverse_string(string));  //function call
     
    }
 
    //function definition
    char *reverse_string(char *str){

        if(str==0){
            return NULL; // checks if string is entered 
        }
        //checks empty srting
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
