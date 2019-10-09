#include <iostream>
using namespace std;
int main()
{
   int i,j,N;
   cin>>N;
   i=1;
   while(i<=N)
   {
       j=1;
       int a;
       //if(i%2==0) a=0; else a=1;
       a=i%2;
       while(j<=i)
       {
           cout<<a<<" ";
           //if(a==0 )    a=1; else a=0;
            a=1-a;
           j++;
       }
       cout<<endl;
       i++;

   }


   return 0;
}
