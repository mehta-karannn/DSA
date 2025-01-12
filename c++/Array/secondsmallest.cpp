#include <bits/stdc++.h>
using namespace std;

int secondSmallest(int arr[], int n) {
    int smallest = arr[0];
    int ssmallest = INT_MAX;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            ssmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < ssmallest && arr[i] != smallest) {
            ssmallest = arr[i];
        }
    }

    return ssmallest;
}

int main() {
    int arr[] = {1, 2, 5, 3, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int ssmallest = secondSmallest(arr, n);
    
    cout << "The second smallest element is: " << ssmallest << endl;
    
    return 0;
}
