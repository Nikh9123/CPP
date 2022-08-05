using namespace std ;
#include<iostream>
int main()
{

    int i = 9;
    int *p = 0 ;
    // never declare pointer without any value like int *p  ;
    // always intialize them with 0 which is called null pointer
    // int *p = 0;
    p = &i ;
    cout<<"value is "<<*p<<endl;
    cout<<"address is "<<p<<endl;
    (*p)++ ; // increamenting the value 
    cout<<"value of *p "<<*p<<endl;
    // changing in pointer value will directly affect the variables value
     cout<<"value of i = "<<i<<endl;;
     i++ ;
     cout<<"after increamenting i value "<<i<<" "<<*p<<endl;
    
     
     // intializing pointer to pointer(copying pointer) 

     int *q = p ; 
     cout<<p<<" __ "<<q<<endl;
     cout<<*p<<"__  "<<*q<<endl;
     // all values will be same as previous pointer//


     // imporatant concept pointer arthmetic 
     cout<<"arthemtic concept"<<endl<<endl<<endl;
     int num = 78 ;
     int *t = &num ;
     cout<<(*t)++<<endl;
     cout<<t<<endl;
    t = t+1 ;
    cout<<t<<endl;
    cout<<endl;
    
}