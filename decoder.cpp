#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int v;
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        cout<<(char)(s[i]-7);
    }

}
