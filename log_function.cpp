#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    long x,i;
    int n;
    cin>>x>>n;
    for(i=0;i<x;i++)
    {
        if(pow(n,i)==x)
        break;
    }
    if(i<x) cout<<i;
    return 0;

}
