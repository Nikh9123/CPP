#include <iostream>
using namespace std;
int lastOccu(int arr[],int n,int key)
{
    int start = 0,end=n-1;
    int mid = start + (end - start)/2 ;
    int ans = -1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
           ans = mid;
           start = mid + 1 ;
        }
        else if(arr[mid]>key)
        {
            end = mid - 1;
        }
        else{
            start = mid +1 ;
        }
        mid = start + (end - start)/2 ;

    }
    return ans ;


}
int main() {
    //Write your code here
int n;
    n=10;
   int arr[10]={1,2,3,4,5,6,7,8,8,8};
    int key ;
    key=8;
   
cout<<"last="<< lastOccu(arr,10,key);
    
    
    return 0;
}