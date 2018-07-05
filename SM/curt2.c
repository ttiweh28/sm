#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 char *replace_aCharacter(char *str, unsigned char new_char, unsigned int position);
 /* function prototypes */
 char *remove_aCharacter(char *str, unsigned int position);

/*Function to replace a string with another string*/
 
char *rep_str(const char *s, const char *old, const char *new1)
{
    char *ret;
    int i, count = 0;
    int newlen = strlen(new1);
    int oldlen = strlen(old);
 
    for (i = 0; s[i] != '\0'; i++)    
    {
        if (strstr(&s[i], old) == &s[i]) 
        {
            count++;
            i += oldlen - 1;
        }
    }
    ret = (char *)malloc(i + count * (newlen - oldlen));
    if (ret == NULL)
        exit(EXIT_FAILURE);
    i = 0;
    while (*s)
    {
        if (strstr(s, old) == s) //compare the substring with the newstring
        {
            strcpy(&ret[i], new1);
            i += newlen; //adding newlength to the new string
            s += oldlen;//adding the same old length the old string
        }
        else
        ret[i++] = *s++;
    }
    ret[i] = '\0';
    return ret;
}
 
int main(void)
{
    char mystr[100], c[10], d[10];
    /* printf("Enter a string along with characters to be rep_strd:\n");
    gets(mystr);
    printf("Enter the character to be rep_strd:\n");
    scanf(" %s",c);
    printf("Enter the new character:\n");
    scanf(" %s",d);
    char *newstr = NULL;
 
    puts(mystr);
    newstr = rep_str(mystr, c,d);
    printf("%s\n", newstr);
    free(newstr); */
    char *string, *result;
    unsigned int position; 

    printf(" Enter the string and position  ");
    scanf("%s %i", &string,&position); //get the string from the terminal (a maximum of 1000)
    // printf("\n Enter the position> ");
    // scanf(" %i",&position);
    

    if((result = remove_aCharacter(string, position)) != NULL){
        printf(" the string is %s with char at %i position removed is %s",string, position, result);
    }
    else{
        printf(" ERROR: position entered was greater than the number of characters in the string\n");
    }


    return 0;
}

/* function to remove a given character at a specified position 
    returns the string str with the character at the specified position deleted or null if
    the string lenght is less than the position specified
*/
char *remove_aCharacter(char *str, unsigned int position){
    char buffer[strlen(str)];
    unsigned int pos = 0;
    unsigned int index = 1;

    /* check the string to make sure it is not null nor empty */
    if(strlen(str) < position){
        return NULL;
    }
    /* loop through the string, as long as there are more characters in the string */
    while(*str != '\0'){

        if(index != position){  //if the character is not the one at the required position, put it in the buffer
            buffer[pos++] = *str;
        }
        else{
            *str = '\0';    //delete the character at that particular position
        }
        ++index;            //go to the next position
        *str++;             //go to the next character
    }
    buffer[pos] = '\0';     //terminate the end of the string

    /* copy the buffer back to the str */
    strcpy(str, buffer);

    return str;
}

/* function to replace a given character at a specified position with another character
    returns the string 'str' with the character at the specified position replaced with
    the supplied char 'new_char' or null if the string lenght is less than the position specified
*/
char *replace_aCharacter(char *str, unsigned char new_char, unsigned int position){
    char buffer[strlen(str)];
    unsigned int pos = 0;
    unsigned int index = 1;

    /* check the string to make sure it is not null nor empty */
    if(strlen(str) < position){
        return NULL;
    }
    /* loop through the string, as long as there are more characters in the string */
    while(*str != '\0'){

        if(index != position){  //if the character is not the one at the required position, put it in the buffer
            buffer[pos++] = *str;
        }
        else{
            *str = new_char;    //insert supplied  character at that particular position
        }
        ++index;            //go to the next position
        *str++;             //go to the next character
    }
    buffer[pos] = '\0';     //terminate the end of the string

    /* copy the buffer back to the str */
    strcpy(str, buffer);

    return str;
}