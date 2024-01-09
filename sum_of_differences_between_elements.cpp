#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    int total=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           total+=abs(num[j]-num[i]);
        }
    }
    cout<<total<<endl;
}
