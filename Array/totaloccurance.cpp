using namespace std;
#include<iostream>
int FirstOccu(int arr[],int n,int key)
{
    int start = 0,end=n-1;
    int mid = start + (end - start)/2 ;
    int ans = -1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
           ans = mid;
           end = mid-1 ;
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
int TotalOccu(int first ,int last)
{
   int total = 0 ;
    total = (last - first) + 1 ;
    return total ;
   
}
int main()
{
    int arr[10]={1 ,4, 3, 8, 3, 32, 24, 1, 23, 8};

    int key;
    cin>>key;
    int first = FirstOccu(arr,8,key);
    int last = lastOccu(arr,8,key);
    cout<<TotalOccu(first,last);
   cout<< lastOccu(arr,8,key);
}