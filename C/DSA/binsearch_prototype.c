#include<stdio.h>

int main(){
    int lowIndex, highIndex, midIndex;
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 18};
    int resultValue = -1, targetValue;
    int len = sizeof(num) / sizeof(num[0]);
    
    printf("Input Target: "); scanf("%d", &targetValue);
    
    lowIndex = 0; highIndex = len - 1;
    
    while(lowIndex <= highIndex){
        midIndex = (lowIndex + highIndex) / 2;
        if(num[midIndex] == targetValue){
            resultValue = midIndex;
            break;
        }
        else if(num[midIndex] < targetValue){
            lowIndex = midIndex + 1;
        }
        else if(num[midIndex] > targetValue){
            highIndex = midIndex - 1;
        }
    }
    
    if(resultValue != -1){
        printf("Target Found at Index: %d\n", resultValue);
    }
    else{
        printf("Target not Found at Index at all\n");
    }
    
    return 0;
}
