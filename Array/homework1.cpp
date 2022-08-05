using namespace std;
#include<iostream>
int main()
{
    int num ;
    cin>>num;
    int notes = 0 ;
    switch(num)
    {
    notes = num / 100 ;
    cout<< "100 rupees notes = "<< notes<<endl;
    num =  num - (notes*100);
    notes = num / 50 ;
    cout<<"50 rupees notes = "<<notes<<endl;
    num =  num - (notes*50);
    notes = num / 20 ;
    cout<<"20 rupees notes = "<< notes<<endl;
     num =  num - (notes*20);
     notes = num / 10 ;
     cout<<"10 rupees notes = "<<notes<<endl;
     break;
     default:
         cout<<"please enter a valid integer value"<<endl;
     
    }
}