#include <iostream>
using namespace std;
int n(int num[100])
{
	int d;
	if(num[2]-num[1]==num[1]-num[0])
	{
		d=(num[2]-num[1]);
		return num[3]+d;
	}
	else if(num[2]/num[1]==num[1]/num[0])
	{
		d=(num[2]/num[1]);
		return num[3]*d;
	}
}
int main()
{
	int t,i,j,num[100];
	cin>>t;
	for(i=0;i<t;i++)
	{
		for(j=0;j<4;j++)
		{
			cin>>num[j];	
		} 
		
		for(j=0;j<4;j++)
		{
			cout<<num[j]<<" ";	
		} 
		cout<<n(num)<<endl;
	}
	
}

