#include<bits/stdc++.h>
using namespace std ;
void print(int n){
    //base case (B.C.)
    if(n==0){
        return ;
    }
cout<< n <<endl;
//recursive relation(RR)
print(n-1) ;
}

int main()
{
    int n ;
    cin>>n ;

    print(n);
}