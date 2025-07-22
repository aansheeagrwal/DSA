/*
Ques:- WAF to print intersection of 2 arrays.(using Nested loop)
*/
#include <iostream>
using namespace std;

// Function to print intersection of 2 arrays
void printIntersection(int arr1[], int size1, int arr2[], int size2) {
    cout << "Intersection: ";
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;  // Avoid printing duplicates for same element in arr2
            }
        }
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int size1 = 5, size2 = 5;

    printIntersection(arr1, size1, arr2, size2);

    return 0;
}




