#include<iostream>
using  namespace std;
int factorial(int n)
{
    int fact = 1 ;
    for(int i = 1 ; i <= n ; i++)
    {
        fact = fact * i ;
    }
    return fact ;
}
int nCr(int n,int r)
{
    int num = factorial(n);
    int deno = ((factorial(r)%1000000007) * (factorial(n-r)%1000000007))%1000000007;
    int ans = num / deno ;
    return ans ;
}
int main()
{
 int n,r ;
 cout<<"enter the value of n and r"<<endl;
 n=15,r=3;
 cout<<"nCr is = "<<nCr(n,r);
  return 0;
}