#include<iostream>
using namespace std ;
int power(int n)
{
    if(n==0)  // base case
    {
        return 1 ;
    }
//recursive relation
int choti = power(n-1) ;
// int badi = 2 * choti ;
return 2 * choti ;
}
int main(){
    int n ;
    int ans ;
    cin>>n;
    ans = power(n);
    cout<<ans<<endl;
}