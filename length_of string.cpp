#include<iostream>
using namespace std;
int slenght( char str[])
{
    int length=0;
    for(int i=0;str[i]!='\0';i++)
    {
        length++;
    }
    return length;
}
int main()
{
    char str[100];
    cin.getline(str,100);
    int l=slenght(str);
    cout<<l;
    return 0;
}
