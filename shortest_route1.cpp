#include <iostream>
using namespace std;
int main()
{
    char ch;
    int cntN=0,cntE=0;
    ch=cin.get();
    while(ch!='$')
    {



        if(ch=='N') cntN++;
        if(ch=='S') cntN--;
        if(ch=='E') cntE++;
        if(ch=='W') cntE--;


        ch=cin.get();



    }
    cout<<"N"<<"    "<<cntN<<endl<<"E"<<"   "<<cntE;
    return 0;
}
