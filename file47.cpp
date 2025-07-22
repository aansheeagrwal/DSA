/*
Ques:- WAF to calculate sum & product of all numbers in an array.
*/
#include <iostream>
using namespace std;

// Function to calculate sum and product
void calculateSumProduct(int arr[], int size, long long &sum, long long &product) {
    sum = 0;
    product = 1;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
        product *= arr[i];
    }
}

int main() {
    int nums[] = {2, 3, 4, 5};
    int size = 4;

    long long sum, product;
    calculateSumProduct(nums, size, sum, product);

    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;

    return 0;
}

