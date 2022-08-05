using namespace std;
#include<iostream>
int main()
{
    int a,b ;
    cout<<"enter the value of a and b "<<endl;
    cin>>a>>b;
    char op ;
    cout<<"enter the operation u want to perform"<<endl;
    cin>>op;
    switch(op)
    {
        case '+' :
        {
         cout<<(a+b);
        break;
        
        }
        case '-':
        {
        cout<<(a-b);
        break;
        }
        case '*':
        {
        cout<<(a*b);
        break;
        }
        case '/' :
        {
         cout<<(a/b);
         break;
        }
    }
}