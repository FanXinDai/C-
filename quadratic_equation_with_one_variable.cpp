#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"ax^2+bx+c=0 \n";
	cout<<"Please input a,b,c in order:";
	cin>>a>>b>>c;
	int ov=pow(b,2)-4*a*c;
	if(ov==0)
	{
		cout<<-b/(2*a);
		
	}
	else if(ov>0)
	{
		cout<<(-b+sqrt(ov))/(2*a) <<" "<< (-b-sqrt(ov))/(2*a);
	} 
	else if(ov<0)
	{
		cout<<"none";
	}
	
	return 0;
	
 } 
