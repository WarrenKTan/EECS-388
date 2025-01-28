#include <stdio.h>

int isBitSet(int num, int bit) {
    // find the bit and return the bit in that position
    int checkedBit = 1 << bit;
    return num & checkedBit;
}

int main() {
    // define variables
    int num;
    int bit;

    // get user input
    printf("Enter integer: ");
    scanf(" %d", &num);
    printf("Enter bit: ");
    scanf(" %d", &bit);

    if (isBitSet(num, bit)){
        printf("TRUE");
    }else{
        printf("FALSE");
    }

    return 0;
}