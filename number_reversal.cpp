#include <iostream>
using namespace std;
int main()
{
	int num,s,m,u;
	cin>>num;
	m=0;
	while(num>0)
	{
		m*=10;
		m+=num%10;
		num/=10;
	}
	cout<<m;
	
	

}
