#include <bits/stdc++.h>
using namespace std;

int maximum(int arr[], int start, int end) 
{ 
    int max = arr[start]; 
    int i; 
    for (i = start + 1; i <= end; i++) 
    { 
        if (arr[i] > max) 
            max = arr[i]; 
        else
            break; 
    } 
    return max; 
} 


int main() 
{ 
    int arr[] = {1, 30, 40, 50, 60, 70, 23, 20}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    cout << "The maximum element is " << maximum(arr, 0, n-1); 
    return 0; 
} 
