#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int f(int start,int a[20],int num)
{

    int i;
    for(i=start;i<20;i++)
    {

        if(a[i]==num)
        {
            return i;
        }

    }

    return -1;


}
int main()
{

    int start=0, a[20],num,c;
    srand(time(NULL));
    for(int i=0;i<20;i++)
    {
        a[i]=rand()%21;
    }
    cout<<"Please enter the value you want to search for <1-10> :";
    cin>>num;
    c=f(start,a,num);
    while(c!=-1)
    {

        cout<<num<<"found at "<<"a["<<c<<"]"<<"="<<num<<endl;
        c=c+1;
        c=f(c,a,num);

    }

}


