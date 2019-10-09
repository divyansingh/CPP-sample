#include <iostream>
using namespace std;
int main()
{
   int i,j,N,k;
   cin>>N;
   cout<<"1"<<endl;
   for(i=2,k=1;i<=N;i++,k++)
   {
       for(j=1;j<=i;j++)
       {
           if((j==1)||(i==j))
            {
                cout<<k;
            }
            else
            {
                cout<<"0";
            }
       }
       cout<<endl;
   }
   return 0;
}
