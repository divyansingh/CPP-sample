#include<bits/stdc++.h>

using namespace std;

void subset(int arr[],int k,int n,int idx,vector<int> &v,vector<vector<int> > &result){
	if(idx==n)	return;

	if(k==1){
	    for(int i=idx;i<n;i++)
    	 {
        	v.push_back(arr[i]);
        	result.push_back(v);
        	v.pop_back();
     	}
	}

 	for(int j=idx;j<n;j++) {
  		v.push_back(arr[j]);
  		subset(arr,k-1,n,j+1,v,result);
 		 v.pop_back();
 	 }
}
int main(){

	int t;cin>>t;
	while(t--){
		vector<int> v;
		vector<vector<int> > result;
		int arr[100],n,k;
		cin>>n>>k;
		for(int i=0;i<n;i++)	cin>>arr[i];
		subset(arr,k,n,0,v,result);
        int sum=100000000,sumi=0;
		for(int i = 0;i<result.size();i++)
 		{
  			int tmp=0;
  			for(int j = 0;j<result[i].size();j++)

                {
                    //cout<<result[i][j]<<" ";
    		 	 tmp+=result[i][j] ;
                }
                //cout<<endl;
   			if(tmp<sum){sum=tmp;sumi=1;}    else if(sum==tmp)   sumi++;
 		}
 		cout<<sumi<<endl;
    }
    return 0;

}
