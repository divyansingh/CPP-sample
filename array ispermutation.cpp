#include <iostream>
using namespace std;

int main(){

    char s1[100], s2[100];

    cin.getline(s1,100);
    cin.getline(s2,100);


    ///assuming that it will have on small chars

    int arr[26]={0}, i;

    for (i=0;s1[i]!='\0' && s2[i]!='\0';i++){
        arr[s1[i]-'a']++;
        arr[s2[i]-'a']--;
    }
    if (s1[i]!='\0' || s2[i]!='\0'){
            cout<<"Not a permutation";
            return 0;
        }

    for (i=0;i<26;i++){
        if (arr[i]!=0) {
            cout<<"Not a permutation";
            return 0;
        }
    }
    cout<<"Is Permutation";
}
