#include<iostream>
using namespace std;
int main()
{
	int row,clm;
	cin>>row>>clm;
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=clm;j++)
		{
	if(i==1||i==row || j==1 || j==clm)
	{
		cout<<"*";
	}
	else
	{
		cout<<" ";
	}
	
		}
		cout<<endl;
	}
}
