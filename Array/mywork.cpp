#include<iostream>
using namespace std ;
class array{
      int arr[10];
    public:
    
     array (){

    }
    void input();
    void output();

};

void array::input()
{
    cout<<"enter array element"<<endl;
    for(int i=0;i<10;i++)
    cin>>arr[i];

}
void array::output(){
    cout<<"array elements are"<<endl;
    
for(int i=0;i<10;i++)
{
    cout<<arr[i]<<" "<<endl;
}
}
int main(){
    // // int arr[5] = 5 ;
    // // cout<<arr[5]<<endl;


    // char name[5] = {'l','p','u'};


    // // for(int i=0;i<5;i++){
    // //     cout<<name<<" "<<endl;
    // // }
    // cout<<name[4]<<endl;

   array a ;
   a.input();
   a.output();
    
}