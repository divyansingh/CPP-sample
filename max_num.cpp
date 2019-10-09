#include<iostream>
using namespace std;
int main()
{
    int i,a[10],max;
    for(i=0;i<10;i++)
       {

        cin>>a[i];
       }

   for(i=0,max=a[0];i<10;i++)
       {
            if(a[i]>max)
            {
               max=a[i];
            }
       }

       cout<<"MAx "<<max;
}
