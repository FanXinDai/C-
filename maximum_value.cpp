#include <iostream>
using namespace std;
int main()
{
	int num[3]={5,9,13};
	int i,maxi=-100;
	for(i=0;i<3;i++)
	{
		if(num[i]>maxi)
		{
			maxi=num[i];
		}
		
	}
	cout<<"5,9,13 Maximum of Three Numbers= "<<maxi<<endl;
 } 

