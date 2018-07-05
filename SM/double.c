 #include <stdio.h>
#include "stdio.h"
#include <stdlib.h>
#include <string.h>
 
 //fuction declaration
 char *double_string(char *str);

int main(){
     char *string; //pointer to the string entered
     char *temp;    //temporary storage
     printf( "Enter the string\n");
     gets(string);

     temp=string;

     printf("The double is %s", temp, double_string(temp));  //function call
     
    }
 
//function definition to double the string
char *double_string(char *str){
       
       char *duplicate;
//checks for null
     if(str==0){
            return NULL;
        }
        //checks empty string
        if(*str==0){
            return NULL;
        }

        duplicate=strdup(str); //function to create a duplicate value
        strcat(str,duplicate); //concatenation of the doubled string
        return str;
  }
