#include<iostream>
using namespace std;
int BinarySearch(int arr[],int key,int n)//n=size of array
{
int start=0;
int end=n-1;
int mid=start + (end - start)/2;
 while (start <= end) {
        int m = start + (end - start) / 2;
 
        // Check if x is present at mid
        if (arr[m] == key)
            return m;
 
        // If x greater, ignore left half
        if (arr[m] < key)
            start = m + 1;
 
        // If x is smaller, ignore right half
        else
            end = m - 1;
    }
 
    // if we reach here, then element was
    // not present
    return -1;
}

int main()
{
    int even[5]={100,-2,6 ,10, 11};
    int odd[8]={1,3,5,7,9,11,13,15};
    cout<<BinarySearch(even,100,5);

}