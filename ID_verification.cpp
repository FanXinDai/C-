#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int num2,num1,total;
    char alphabet[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int num[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
    string s;
    getline(cin,s);
    for(int i=0;i<26;i++)
    {
        if(alphabet[i]==s[0])
        {
            alphabet[i]==num[i];
            num2=num[i]%10;
            num1=num[i]/10;
            break;
        }

    }

   total=num1+num2*9;
   for(int i=1;i<=8;i++)
   {
        total+=(s[i]-'0')*(9-i);
   }
   total+=s[9]-'0';

   if(total%10==0)
   {
       cout<<"real";
   }
   else
   {
       cout<<"fake";

   }
}
