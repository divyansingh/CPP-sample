#include<iostream>
using namespace std;
int main()
{
    int i,j;
    char a[100];
    cin.getline(a,100);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i;a[j]!='\0';j++)
        {
            for(int k=i;k<=j;k++)
                cout<<a[k];
                cout<<endl;
        }

    }
    return 0;
}
