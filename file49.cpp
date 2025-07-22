/*
Ques:- WAF to print all the unique values in an array.
*/
#include <iostream>
using namespace std;

// Function to print unique values
void printUnique(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool isUnique = true;

        // Check if arr[i] occurs again
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        // Print if unique
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 3, 5, 2, 8, 2, 9};
    int size = 7;

    cout << "Unique values: ";
    printUnique(arr, size);

    return 0;
}



