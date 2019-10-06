#include <iostream>
using namespace std;

void DupAddStar(char str[], int s, char strOut[], int pos){
    if (str[s]=='\0') {
        strOut[pos]='\0';
        return;
    }

    if (s==0) strOut[pos]=str[s];
    else if ( str[s]!=str[s-1]) strOut[pos]=str[s];
    else {
        strOut[pos++]='*';
        strOut[pos]=str[s];
    }
    DupAddStar (str,s+1,strOut,pos+1);
}


int main(){
    char str[100];
    cin.getline(str,100);
    char strOut[1000];

    DupAddStar (str, 0, strOut,0);
    cout<<strOut;
}
