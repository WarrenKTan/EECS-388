#include <stdio.h>

int overrideBit(int num, int bit, int override){
    int newNum = num;
    int checkedBit;
    if (override == 0){
        // remove bit from map
        checkedBit = ~(1 << bit - 1);
        
        // write bit to map
        newNum = num & checkedBit;
    }else if (override == 1){
        // location of bit set to 1
        checkedBit = (1 << bit - 1);
        
        // setting location of bit to 1 while keep everything the same
        newNum = num | checkedBit;
    }
    
    return newNum;
}

int main() {
    // define variables
    int num;
    int bit;
    int override;

    // get user input
    printf("Enter integer: ");
    scanf(" %d", &num);
    printf("Enter bit: ");
    scanf(" %d", &bit);
    printf("Enter override: ");
    scanf(" %d", &override);

    printf("%d", overrideBit(num, bit, override));

    return 0;
}