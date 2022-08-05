using namespace std;
#include<iostream>
bool search(int arr[] , int n, int key )
{
     for(int i = 0 ; i<n ; i++)
     {
         if(key == arr[i])
         {
             return 1 ;
         }
         else 
         {
             return 0 ;
         }
     }

}
int main()
{
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    cout<<"enter the key you want to search"<<endl;
    int key ;
    cin>>key ;
    bool found = search(arr,10 ,key);
    if(found)
    {
        cout<<"element found"<<endl;
    }
    else {
        cout<<"element abesent"<<endl;
    }


}