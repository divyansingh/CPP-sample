#include <iostream>
using namespace std;
int main()
{
    int N,i,j,k;
    cin>>N;
    int q=N-1;
    for(i=1;i<=N;i++,q--)
       {
           for(k=1;(k<=q)&&(q>=1);k++)
           {
              cout<<" ";
           }
           for(j=1;j<=N;j++)
           {

               if((i==1)||(j==1)||(i==N)||j==N)
               {
                   cout<<"*";
               }
               else
                {
                    cout<<" ";
                }
           }
           cout<<endl;
       }

}
