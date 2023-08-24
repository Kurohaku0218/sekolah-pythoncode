#include<iostream>
using namespace std;

int main() {
    int num[] = {2, 1, 3, 20, 18, 27, 30, 11, 13, 9, 8};
    int len = sizeof(num) / sizeof(num[0]);
    int resultCounter, resultValue = -1, target;
    
    cout << "Input Target Value: "; cin >> target;
    
    for(resultCounter = 0; resultCounter < len; resultCounter++){
        if(num[resultCounter] == target){
            resultValue = resultCounter;
        }
    }
    
    if(resultValue != -1){
        cout << "Target Found at Index: " << resultValue << endl;
        cout << "Target Found at Itteration " << resultValue + 1 << endl;
    }
    else{
        cout << "Target not Found" << endl;
    }
    
    return 0;
}
