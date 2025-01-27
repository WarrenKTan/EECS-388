#include <stdio.h>

// check if 'key' is in 'array'
int isInArray(int* array, int arraySize, int key){
    for(int i = 0; i < arraySize; i++){
        if(array[i] == key){
            return 1;
        }
    }
    return 0;
}

int repeatedElements(int* array, int arraySize){
    int repeated = 0;
    int curNum;
    int inRepeated;
    int inTracker;
    
    // tracked numbers, not repeated
    int numTracker[arraySize];
    int numTrackerSize = 0;
    
    // repeated numbers accounted for (don't double-count numbers)
    int repeatedNums[arraySize / 2];
    int repeatedNumsSize = 0;
    
    // check each number given by user
    for(int i = 0; i < arraySize; i++){
        curNum = array[i];
        
        // is number already repeated/accounted for?
        inRepeated = isInArray(repeatedNums, repeatedNumsSize, curNum);
        if(inRepeated){
            
        }else{
            // is it the second+ time seeing this number?
            inTracker = isInArray(numTracker, numTrackerSize, curNum);
            
            if(inTracker){
                // account for repetition of 'curNum'
                repeatedNums[repeatedNumsSize++] = curNum;
                repeated += 1;
            }else{
                // add 'curNum' to tracker
                numTracker[numTrackerSize++] = curNum;
            }
        }
    }
    
    return repeated;
}

int main() {
    int arraySize;

    printf("How big is the array? ");
    scanf(" %d", &arraySize);

    // create array with size given by user
    int array[arraySize];

    for(int i = 0; i < arraySize; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // print amount of repeated elements
    printf("Repeated Elements: %d", repeatedElements(array, arraySize));
    
    return 0;
}