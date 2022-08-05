using namespace std ;
#include<iostream>
int GetMax(int num[], int size)
{
    int maxi = INT32_MIN;
    for(int i = 0 ;i<size;i++)
    {
        maxi = max(maxi,num[i]);

        
    }
    return maxi ;
}
int GetMin(int num[], int size)
{
    int mini = INT32_MAX;
    for(int i = 0 ;i<size;i++)
    {
        mini = min(mini,num[i]);

        
    }
    return mini ;
}
int main()
{
    int size ;
    cin>>size ;

    int num[100] ;
    for(int i = 0 ; i  < size ; i++)
    {
        cin>>num[i];
    }
     return 0;
}