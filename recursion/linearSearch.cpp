#include<bits/stdc++.h>
using namespace std ;
void print(int arr[], int n){
    cout<<"size of the array is "<<n<<endl;
   for(int i =0;i < n;i++){
    cout<<arr[i]<<" ";
    
   }
   cout<<endl;
}
bool linearsearch(int arr[], int n, int k){
    print(arr,n);
    
    //base case
    if(n==0){
        return false ;
    }
    //processing
    if(arr[0] == k){
        return true ;
    }
else {
    //recursion call
    bool remain = linearsearch(arr+1, n-1, k);
return remain ;
}

}
int main(){
    int arr[5] = {1,8,3,5,4} ;

    bool ans = linearsearch(arr,5,4);
    if(ans){
        cout<<"element found "<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
}