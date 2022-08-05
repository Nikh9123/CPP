
#include<iostream>
using namespace std;
int Peak(int arr[],int n)
{
if (n == 1)
        return 0;
    if (arr[0] >= arr[1])
        return 0;
    if (arr[n - 1] >= arr[n - 2])
        return n - 1;
 
    // check for every other element
    for (int i = 1; i < n - 1; i++) {
 
        // check if the neighbors are smaller
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
            return i;
    }
}
int main()
{
    int even[3]={1,2,3};
    cout<<"Peak elements is at index "<<Peak(even,3);
    return 0;

}