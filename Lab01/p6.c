#include <stdio.h>

int strLength(char* string){
    int length = 0;
    
    // '\0' indicates an empty char index
    while (string[length] != '\0'){
        length += 1;
    }
    
    return length;
}

int main() {
    char* userString[100];
    int stringLength;
    
    
    printf("Enter string: ");
    scanf(" %s", userString);
    
    stringLength = strLength(userString);
    
    printf("%s is %d length.", userString, stringLength);
    
    return 0;
}