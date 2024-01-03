#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string s,rs;
	cin>>rs;
	s=rs;
	reverse(rs.begin(),rs.end());
	if(s==rs)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";	
	}
	
}

