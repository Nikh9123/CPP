#include<bits/stdc++.h>
using namespace std ;
int Tsum(int arr[],int n){
    int sum =0;
    if(n==0 )
    {
        return 0 ;
    }
    if( n==1){
        return arr[0];
    }
    
    sum = arr[0] +  Tsum(arr +1 , n-1);
    return sum ;
    
 
   
   

  
}
int main(){

    int arr[4] = {3,2,5,6} ;
     cout<<Tsum(arr,4) ;

}