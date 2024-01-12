#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int f(int color)
{
    if(color==4)
    {
        cout<<"Spades";
    }
    else if(color==3)
    {
        cout<<"Hearts";
    }
    else if(color==2)
    {
        cout<<"Diamonds";
    }
    else if(color==1)
    {
        cout<<"Clubs";
    }

}
int main()
{
    int n,player,npc;
    while(1)
    {
        cout<<"Do you want to compare 0>Quit or 1>bigger or 2>smaller?"<<" ";
        cin>>n;
        if(n==1||n==2)
        {
            cout<<"Dealing cards......"<<endl;
        }
        else if(n==0)
        {

            break;
        }


        struct card
        {
            int color;
            int num;
        }player,npc;



        srand(time(NULL));

        player.color=rand()% 4+1;
        player.num =rand()%13+1;

        npc.color=rand()%4+1;
        npc.num=rand()%13+1;

        cout<<"player :";
        f(player.color) ;
        cout<<player.num<<endl;

        cout<<"NPC    :";
        f(npc.color);
        cout<<npc.num<<endl;

        if(n==1)
        {
            if(player.color>npc.color)
            {
                cout<<"you win";
            }
            else if(player.color<npc.color)
            {
                cout<<"you lose";
            }
            else if(player.color==npc.color)
            {
                if(player.num>npc.num)
                {
                cout<<"you win";
                }
                else if(player.num<npc.num)
                {
                    cout<<"you lose";
                }
            }
        }
        else if(n==2)
        {
            if(player.color<npc.color)
            {
                cout<<"you win";
            }
            else if(player.color>npc.color)
            {
                cout<<"you lose";
            }
            else if(player.color==npc.color)
            {
                if(player.num<npc.num)
                {
                cout<<"you win";
                }
                else if(player.num>npc.num)
                {
                    cout<<"you lose";
                }

            }
        }

        cout<<endl;
        cout<<"play again?";
    }
}
