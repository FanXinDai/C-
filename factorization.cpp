#include <iostream>
using namespace std;
int main()
{
    int i,n,num=0;
    cin>>n;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            num++;
            n=n/i;
            i--;
        }
        else
        {
            if(num!=0)
            {
                cout<<i;
                if(num!=1)
                {
                    cout<<"^"<<num;
                }
                cout<<" * ";
            }
            num=0;
        }
    }
    if(num!=0)
    {
        cout<<i;
        if(num!=1)
        {
            cout<<"^"<<num;
        }

    }
}
