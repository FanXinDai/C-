#include <iostream>
using namespace std;
int main()
{
    int num[200]={0},n,index=1;
    num[0]=1;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<index;j++)
        {
            num[j]*=i;
        }
        for(int j=0;j<index;j++)
        {
           if(num[j]>=10)
           {
              num[j+1]+=num[j]/10;
              num[j]%=10;
           }
        }
        while(num[index]>0)
        {
            if(num[index]>=10)
            {
                num[index+1]+=num[index]/10;
                num[index]%=10;
            }
            index++;
        }
    }
   for(int k=index-1;k>=0;k--)
   {
       cout<<num[k];
   }
}
