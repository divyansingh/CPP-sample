#include<iostream>
#include<math.h>
using namespace std;
void quadratic(int a,int b,int c)
{
    float x1,x2;
    float d=b*b-4*a*c;


      if(d>0)
        {
                cout<<"Real and Distinct"<<endl;
                x1=(-b+sqrt(d))/(2*a);
                x2=(-b-sqrt(d))/(2*a);
                cout<<x1<<" "<<x2;


        }
        else    if(d<0)  {  cout<<"Imaginary";}
        else    if(d==0)   {N
                            cout<<"Real and Equal";
                            x1=(-b+sqrt(d))/(2*a);
                            x2=(-b-sqrt(d))/(2*a);
                            cout<<x1<<" "<<x2;


                            }

}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    quadratic(a,b,c);
    return 0;
}
