#include<bits/stdc++.h>
 using namespace std ;
bool Binarysearch(int *arr, int s, int e , int key){
//base case if element not found
if ( s >  e) 
{
    return -1 ;
}


int mid = s + (e-s)/2 ;

//base case 
if(arr[mid] == key){
    return true ;
}

if(arr[mid] < key){
        return Binarysearch(arr, mid+1, e, key);

}
else{
    return Binarysearch(arr, mid-1, e, key);
}

}


 int main(){
    int arr[] = {10,12,13,14,15,16};
    int key = 14 ;
   
    
 cout<<"element found  "<<Binarysearch(arr,0,6,14)<<endl;
    
    return 0 ; 
 }