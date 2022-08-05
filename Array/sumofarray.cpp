using namespace std ;
#include<bits/stdc++.h>
//function for calc sum //
int Sum(int arr[], int n)
{
    int sum = 0  ;
    for(int i = 0 ; i < n ; i++)
    
        sum += arr[i] ;
         return sum ;
    
   
}
int main()
{
    int arr[5] = {15,12,13,14,15};
   
    cout<<"sum of array is "<< Sum(arr,5);
return 0 ;
}