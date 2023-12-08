#include <iostream>
using namespace std;
int main()
{
	int i,j,num;
	cout<<"please enter an integer:";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<i;j++)
		{
			cout<<"*";
		}
		cout<<"-";
		for(j=1;j<=num-i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}


