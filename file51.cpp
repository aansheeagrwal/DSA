#include <bits/stdc++.h>
using namespace std;

int recBinarySearch(vector<int> arr, int tar, int st, int end){
    if(st <= end){
        int mid = st + (end-st)/2;
        
        if(tar > arr[mid]) { //2nd half
            return recBinarySearch(arr, tar, mid+1, end);
        } else if(tar < arr[mid]) { //1st half
            return recBinarySearch(arr, tar, st, mid-1);
        } else { //mid=>ans
            return mid;
        }
    }
    return -1;
}
// Wrapper function to simplify usage
int binarySearch(vector<int> arr, int tar) {
    return recBinarySearch(arr, tar, 0, arr.size() - 1);
}


int main() {
    vector<int> arr1 = {-1, 0, 3, 5, 9, 12}; //odd
    int tar1 = 40;
    
    //cout << binarySearch(arr1, tar1) << endl;
    
    vector<int>arr2 = {-1, 0, 3, 5, 9, 12}; //even
    int tar2 = 0;
    
    cout<< binarySearch(arr2, tar2) << endl;
    return 0;
}
