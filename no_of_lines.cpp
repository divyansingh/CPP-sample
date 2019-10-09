#include <iostream>
using namespace std;
int main()
{
    char ch;
    int cntd=0,cnta=0,cnt=0,cnts=0,cntc=0;
    ch=cin.get();
    while(ch!='$')
    {


        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))   cnta++;
        if(ch>='0'&&ch<='9')       cntd++;
        if(ch==' ')     cnts++;
        if(ch>='!'&&ch<='/')    cntc++;


        ch=cin.get();
         cnt++;


    }
    cout<<cnta<<"    "<<cntd<<"    "<<cnts<<"   "<<cntc<<"   "<<cnt;
}
