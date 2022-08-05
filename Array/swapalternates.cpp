using namespace std;
#include<iostream>
void SwapAlternate(int arr[],int size)
{
    for(int i = 0; i<size; i+=2)
    {int temp ;
        if(i+1 < size)
        {
            temp = arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        //    swap(arr[i],arr[i+1]);
           

        }

    }
}
void PrintArray(int arr[],int n)
{
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }
     cout<<endl;

}
int main()
{
    int even[8]={1,2,3,4,5,6,7,8};
    int odd[5]={11,22,33,44,55};

    SwapAlternate(odd,5);
    PrintArray(odd,5);
}