//Pass By Value
// Copy of argument is passed to function
// question related to pass by value
// Calculate sum of digits of a number
#include<iostream>
using namespace std;

int sumOfDigits(int num){
    int digSum = 0;
    while(num > 0){
        int lastDig = num % 10;
        num /= 10;
        
        digSum += lastDig;
    }
    return digSum;
}



int main(){
    cout << "sum = "<< sumOfDigits(2356)<< endl;

    return 0;
}

