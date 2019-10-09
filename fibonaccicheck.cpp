#include<iostream>
using namespace std;
int main()
{

    int N;
    cin>>N;
    int a=0,b=1;
    int c=a+b;

    while(c<N)
    {
        /*if(c==N)
        {
            cout<<"yes";
            return 0;
        }*/

        a=b;
        b=c;
        c=a+b;
    }
    if(c==N)
    {
        cout<<"yes";
    }
    else

    {
        cout<<"no";
    }


    return 0;
}
