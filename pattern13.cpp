#include <iostream>
using namespace std;
int main()
{
   int i,j,N;
   cin>>N;
   int k=((N-1)/2)+1;

   for(i=1;i<=k;i++)
   {
       for(j=1;j<=N;j++)
       {
           if((j==1)||(j==k)||(i==k)||((i==1)&&(j>k)))
              {
                  cout<<"*"<<" ";
              }

              else
                {
                    cout<<" "<<" ";
                }

       }
       cout<<endl;

   }
   int q,w;
   for(q=1;q<=k-1;q++)
   {
       for(w=1;w<=N;w++)
       {
           if((w==k)||(w==N)||((q==(k-1))&&(w<k)))
           {
               cout<<"*"<<" ";
           }

           else
           {
               cout<<" "<<" ";
           }
       }
       cout<<endl;
   }
   return 0;
}
