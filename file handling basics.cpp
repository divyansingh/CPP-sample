#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
int main(){
    ofstream outFile;
    ifstream inFile;
    string s,s1;
    vector<string> v;
    outFile.open("cb.txt");
    outFile<<"COding Blocks";
    outFile.close();
    inFile.open("cb.txt");
    ///inFile>>s;
    ///inFile.seekg(2);  // starts from 12 point
    while(getline(inFile,s1)) {

            v.push_back(s1);
    }
    inFile.close();
    for(int i=13;i>6;i--)    v[i+9]=v[i];
    v[6]='P';v[7]='P';v[8]='P';v[9]='P';v[10]='P';v[11]='P';v[12]='P';v[13]='P';
    outFile.open("cb.txt");
    for(int i=0;i<22;i++)   outFile<<v[i];
    outFile.close();


    return 0;

}
