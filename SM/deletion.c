#include<stdio.h>
#include <conio.h>
#include<string.h>
#include <stdlib.h>

void delchar(char *x, int a , int b);

void main (){
    char string[10];
    int n, pos,p;
    

    puts("enter string");
    gets(string);
    printf("Enter the position");
    scanf( "%d", &pos);
    printf("enter the number of characters to be deleted");
    scanf("%d",&p);
    delchar(string, n,pos);
    getch();
}
void delchar(char *x, int a, int b){
    if ((a+b-1) <= strlen(x)){
        strcpy(&x[b-1], &x[a+b-1]);
        puts(x);
    }
}