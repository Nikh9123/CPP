using namespace std ;
#include <iostream>
int main()
{
int n1,n2 ;
cout<<"enter the two numbbers"<<endl;
cin>>n1>>n2 ;
char cal ;
cout<<"enter a character b/w +,-,*,/"<<endl;
cin>>cal ;
switch (cal)
{
case '+':
    cout<<n1+n2 ;
    break;
case '-':
    cout<<n1-n2 ;
    break;
    case '*':
    cout<<n1*n2 ;
    break;
    case '/':
    cout<<n1/n2 ;
    break;
default:
cout<<"please choose a right character";
    break;
}
return 0 ;
}