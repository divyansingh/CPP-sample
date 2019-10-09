#include <iostream>
using namespace std;
int main()
{
   int i,j,N,k;
   cin>>N;
   k=(N+1)/2;
   for(i=k;i>=1;i--)
    {
       for(j=1;j<=i;j++)
       {
           cout<<"*"<<" ";
       }
        for(j=1;j<=2*(k-i)-1;j++)
        {
            cout<<" "<<" ";
        }
        for(j=1;j<=i;j++)
       {
           if((i!=k)||(j!=i))
           {
               cout<<"*"<<" ";
           }

       }
       cout<<endl;
    }
    for(i=2;i<=k;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        for(j=1;j<=2*(k-i)-1;j++)
        {
            cout<<" "<<" ";
        }
        for(j=1;j<=i;j++)
        {
            if((i!=k)||(j!=i))

                {
                    cout<<"*"<<" ";
                }
        }


        cout<<endl;
    }

   return 0;
}
