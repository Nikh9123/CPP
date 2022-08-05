#include <iostream>
using namespace std;

int main() {
int n ;
cin>>n;
 long num = 0;
        
        while(n!=0)
        {
            long remainder = n%10;
            num = (num*10)+remainder;
            n = n/10;
        }
        
        cout<<num;

  return 0;
}