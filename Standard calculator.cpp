#include<iostream>
using namespace std;
int main(){
    char ch;
    long n1,n2,s,k=0;
    long a[100000][1000];
    cin>>ch;
    while (!(ch=='x'||ch=='X')){
        switch(ch){
            case '+':
                cin>>n1>>n2;
                s=n1+n2;
                a[k]=s;k++;
                break;
            case '-':
                cin>>n1>>n2;
                s=n1-n2;
                a[k]=s;k++;
                break;
            case '*':
                cin>>n1>>n2;
                s=n1*n2;
                a[k]=s;k++;
                break;
            case '/':
                cin>>n1>>n2;
                if(n2!=0){
                s=n1/n2;
                a[k]=s;k++;
                break;
                }
                else
                    a[k]={"Invalid operation. Try Again"};k++;
                    break;

            case '%':
                cin>>n1>>n2;
                s=n1%n2;
                a[k]=s;k++;
                break;
            default : a[k]={"Invalid operation. Try Again"};k++;
        }
        cin>>ch;
    }
    for(int i=0;i<k;i++)    cout<<a[k]<<endl;

    return 0;
}

