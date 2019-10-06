
#include <iostream>
using namespace std;
bool isBalanced(char a[],int s,char o[],int pos){
    if(a[s]=='\0'){
        if(pos==0)  return true;
                else return false;

    }
    switch(a[s]){
        case '(':
        case '{':
        case '[':   o[pos++]=a[s];
                    break;
        case ')':   if(pos!=0&&o[pos-1]=='(') pos-=1;
                    else return false;
                    break;
        case '}': if(pos!=0&&o[pos-1]=='{')pos-=1;
                  else return false;
                    break;
        case ']': if(pos!=0&&o[pos-1]=='[') pos-=1;
                    else return false;
                    break;
    }
    isBalanced(a,s+1,o,pos);
}

int main(){
    char a[100],o[100];
    cin.getline(a,100);
    if(isBalanced(a,0,o,0))     cout<<"true";
    else    cout<<"false";
    return 0;
}
