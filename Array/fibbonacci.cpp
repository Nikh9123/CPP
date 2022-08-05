using namespace std ;
#include<iostream>
int fibb(int n)
{
	if(n==1)
	return 0 ;

	else if(n==2)
	return 1;
	
	else 
	return(fibb(n-1)+ fibb(n-2));
}
int main()
{
	int n,i ;
	cout<<"enter the value n\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<fibb(i)<<" "<<endl;
	}
}
