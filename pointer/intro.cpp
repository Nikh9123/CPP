using namespace std ;
#include<iostream>
int main()
{
    int num = 5;
    cout<<num<<endl;

// address operator = &  
// & it will give address of any variable 

cout<<"adress of num = "<<&num<<endl;

// declaration of pointer *ptr or we can write any name with *
int *ptr = &num ;
   // ptr is pointer of int type. it will always be type of data type // 
   // to access a variable : 
   //* is derefrence variable 
    cout<<"num = "<<num <<endl;
    cout<<"num = *ptr = " <<*ptr<<endl;
    cout<<"adress of num = ptr =  "<<ptr<<endl;
    // adress of variable = pointer name; (without derference variable)
    // value of variable = *pointer name ;



    // size of pointer 
    cout<<"size of pointer = "<<sizeof(ptr)<<endl;
    return 0 ;
}