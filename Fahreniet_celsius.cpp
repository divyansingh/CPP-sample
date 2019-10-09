#include<iostream>
using namespace std;
int main()
{
    int i,f,s;
    cin>>i>>f>>s;
    for(;i<=f;i+=s)
    {
        cout<<i<<"   "<<(i-32)*5/9<<endl;
    }
    return 0;
}
