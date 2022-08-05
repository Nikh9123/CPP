#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n) 
{ 
    int sum = 0;
    for (int i = 0; i < n; i++) 
    sum += arr[i]; 
  
    return sum; 
} 

int main() 
{ 
    int arr[4] = {12, 3, 4, 15}; 
     
    cout << "Sum of given array is " << sum(arr, 4); 
    return 0; 
} 