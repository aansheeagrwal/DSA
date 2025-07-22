/*
Ques:- WAF to swap the max & min number of an array.
*/
#include <iostream>
#include <climits>
using namespace std;

// Function to swap the max and min elements in an array
void swapMaxMin(int arr[], int size) {
    if (size <= 1) return; // No swap needed for single-element array

    int maxIndex = 0, minIndex = 0;
    int maxVal = INT_MIN, minVal = INT_MAX;

    // Find indexes of max and min elements
    for (int i = 0; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
    }

    // Swap max and min elements
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}

int main() {
    int arr[] = {5, 15, 22, 1, -15, -24};
    int size = 6;

    cout << "Original array: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    swapMaxMin(arr, size);

    cout << "After swapping max & min: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}


