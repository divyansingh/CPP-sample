#include <iostream>
using namespace std;
int main()
{
    char ch;
    int cntN=0,cntE=0,cntS=0,cntW=0;
    ch=cin.get();
    while(ch!='$')
    {



        if(ch=='N') cntN++,cntS--;
        if(ch=='S') cntN--,cntS++;
        if(ch=='E') cntE++,cntW--;
        if(ch=='W') cntE--,cntW++;


        ch=cin.get();



    }
    cout<<endl;
    for(int i=1;i<=cntN&&cntN>0;i++)     cout<<"N"<<" " ;
    for(int i=1;i<=cntE&&cntE>0;i++)     cout<<"E"<<" ";
    for(int i=1;i<=cntW&&cntW>0;i++)     cout<<"W"<<" ";
    for(int i=1;i<=cntS&&cntS>0;i++)     cout<<"S"<<" ";

    return 0;
}
