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
bool ispallindrome(char a[])
{

    int i ,n=slenght(a);
    for( i=0;a[i]!='\0';i++)
    {
        if(a[i]!=a[n-i-1])   return false;

    }

    return true;
}
int main()
{
    char str[100];
    cin.getline(str,100);

    if(ispallindrome(str))    cout<<"pallindrome"<<endl;
    else    cout<<"not";


    return 0;
}

