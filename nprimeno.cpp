#include<iostream>
using namespace std;
int main()
{
    int N,i=2;
    cin>>N;
    while(i<=N)
       {


            int j=2;
            while(j<i)
            {
                if(i%j==0)
                {

                        break;
                }
                j=j+1;
            }

            if(j==i)
                cout<<i<<" ";
               i=i+1;

       }
}
