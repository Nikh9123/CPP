#include <bits/stdc++.h> 

void printArray(int arr[], int n);
{
  for(int i=0;i<n;i++)
  {
      cout<<"array is "<< arr[i]<<" ";
  }
  cout<<endl;
}
   void sort012(int arr[] , int n)

{

    int low=0;

    int mid=0;

    int high=n-1;

 

    while(mid<=high)

    {

        if(arr[mid]==0)

        {

            swap(arr[mid] ,arr[low]);

            mid++;

            low++;

        }

        if(arr[mid]==1)

        {

            mid++;

        }

        if(arr[mid]==2)

        {

            swap(arr[mid] ,arr[high]);

            high--;

        }

    }

}

int main()
{
    int arr[9]={0,1,1,0,1,0,2,1,0};
    sort012(arr,9);
    printArray(arr,9);
}