#include <iostream>
using namespace std;
int main()
{
    int N,S=0,A;
    cin>>N;
    int i=1;
    while(i<=N)
    {
        cin>>A;
        if(A%2==0) S=S+A;

        i=i+1;

    }
    cout<<"the sum of even number is"<<S;
}
