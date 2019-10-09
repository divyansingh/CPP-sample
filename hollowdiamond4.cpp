#include <iostream>
using namespace std;
int main()
{
    int i,j,n,hn,ei,ej;
    cin>>n;
    hn=(n+1)/2;
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=n;j++)
        {
            if(i<=hn)    ei=i; else ei=n-i+1;                               //?? ei=i-hn+1;
            if(j<=hn)    ej=j;  else ej=n-j+1;
            //if(ei==ej)
            //if(ei+ej==hn+1)
            if(ei+ej>=hn+1)
            //if(ei+ej<=hn+1)
                cout<<"* ";
            else    cout<<". ";
        }
        cout<<endl;

    }
}

