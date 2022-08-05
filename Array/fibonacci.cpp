using namespace std;
#include<iostream>
void fab(int n)
{
   int t=0;
   int t1=1;
   int next_Term;

   for(int i=0;i<=n;i++){
   cout<<t<<endl;
   next_Term=t+t1;
   t=t1;
   t1=next_Term;

   }
   return ;
}
int main()
{
    int n;
    cin>>n;
    fab(n);
    return 0;
}