using namespace std;
#include<iostream>
void sum(int arr[][3],int row,int col){
    int R0=0;
    for(int row=0 ;row<3; row++)
{
    for(int col=0; col<3; col++){
         R0 += arr[row][col] ;
    }
}
    cout<<R0<<" " ;
}
int main(){
    int arr[3][3];
    
    for(int i=0; i<3 ; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j] ;
        }
    }
    for(int i=0; i<3 ; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" " ;
        }
        cout<<endl;
    }
sum(arr, 3, 3);
    
}