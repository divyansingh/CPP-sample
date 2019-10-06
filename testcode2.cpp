#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
int main(){
    ofstream outFile;
    ifstream inFile;
    string s,s1;
    vector <string> v;
    outFile.open("cb.txt",ios::app);
    outFile<<"COding Blocks";
    outFile.close();
    vector <string>::iterator it;
    inFile.open("cb.txt");
    while(getline(inFile,s))    v.push_back(s);
    for(it=v.begin();it!=v.end();it++){ cout<<*it<<endl;}
    v.insert(v.begin()+1,"Pitampura");
    inFile.close();
    outFile.open("cb.txt");
    for(it=v.begin();it!=v.end();it++){ outFile<<*it<<endl;}
    outFile.close();
    return 0;

}
