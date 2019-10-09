#include<iostream>
using namespace std;
int main()
{
    int i,a[10];
    bool f=false;
    for(i=0;i<10;i++)
        cin>>a[i];
    int n; cin>>n;
    for(i=0;i<10;i++)
       {

            if(a[i]==n)
            {
                cout<<"Found at "<<i;
                f=true;
            }
       }
       cout<<endl;
       if (!f)cout<<"Not found";
       return 0;
}
