#include <stdio.h>

// find length of string
int strLength(char* string){
    int length = 0;
    
    // '\0' indicates an empty char index
    while (string[length] != '\0'){
        length += 1;
    }
    
    return length;
}

int main() {
    // define variables
    char userString[100];
    int stringLength;
    
    // obtain string from user
    printf("Enter string: ");
    gets(userString);
    
    stringLength = strLength(userString);
    
    printf("%s is %d length.", userString, stringLength);
    
    return 0;
}