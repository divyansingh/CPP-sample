#include<iostream>
#include<math.h>
using namespace std;
char quadratic(int a,int b,int c)
{
    char x[100];
    float x1,x2;
    float d=b*b-4*a*c;


      if(d>0)
        {
           x="Real";


        }
        else    if(d<0)  { x="imaginary"; }
        else    if(d==0)   {x="equal";}


                            }
return x;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<quadratic(a,b,c);

    return 0;
}
