#include <iostream>
using namespace std;
int main()
{
    int N,i=2;
    cin>>N;
    while(i<N)
    {


            if(N%i==0)
                {   cout<<"not prime";
                    return 0;
                }
            i=i+1;

    }
    cout<<"prime";
    return 0;

}
