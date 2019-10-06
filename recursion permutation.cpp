#include<iostream>
#include<cstring>
using namespace std;
void permutation(char a[],int s){
    if(a[s]=='\0')  {
        cout<<a<<endl;
        return;
    }
    for(int i=s;a[i]!='\0';i++){
    swap(a[s],a[i]);
    permutation(a,s+1);
    swap(a[s],a[i]);
    }
}
int main() {
    char a[100];
    cin.getline(a,100);
    permutation(a,0);
	return 0;
}

