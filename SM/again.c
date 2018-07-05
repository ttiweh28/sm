#include <stdio.h>
#include <string.h>
 
#define SIZE 40
 
int main(void)
{

  char buffer1[SIZE] = "computer program";
  char buffer2[SIZE];
  char * ptr;
  int    ch = 'p';
 
  ptr = strchr( buffer1, ch );
  if(ptr!=0){

      strcpy(buffer2,&buffer1[ch]);
      printf("the deleted word is %s",buffer2);
  }
}