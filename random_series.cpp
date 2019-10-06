#include<iostream>
using namespace std;
void series(int n,int n1)
{
    int flag=1;
    for(int i=1;flag<=n;i++)
    {
        if((3*i+2)%n1!=0)
            {
                cout<<3*i+2<<endl;
                flag++;
            }
    }

}

int main()
{
    int n,n1;
    cin>>n>>n1;
    series(n,n1);
    return 0;
}

