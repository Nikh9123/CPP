using namespace std ;
#include<iostream>
bool IsEven(int x)
{
    if(x & 1)
    {
        return 0 ;
    }
    else{
        return 1;
    }

}
int main()
{
    int a ;
    cin>>a;
 cout<<IsEven(a);
}
