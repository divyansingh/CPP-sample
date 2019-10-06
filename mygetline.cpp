#include<iostream>
using namespace std;
void mygetline(char a[], int max,char delim= '\n')
{
    char ch;
    ch=cin.get();
    int i;
    for(i=0;i<max&&a[i]!='\n';i++)
    {
        a[i]=ch;
        ch=cin.get();
    }
    a[i]='\0';

}
int main()
{
    int n;  cin>>n;
    char a[n];
    mygetline(a,n);
    cout<<a;
    return 0;
}
