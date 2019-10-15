
#include <bits/stdc++.h> 
using namespace std; 

bool areDistinct(vector<int> arr) 
{ 
	int n = arr.size(); 

	unordered_set<int> s; 
	for (int i = 0; i < n; i++) { 
		s.insert(arr[i]); 
	} 

	
	return (s.size() == arr.size()); 
} 


int main() 
{ 
	std::vector<int> arr = { 1, 2, 3, 2 }; 

	if (areDistinct(arr)) { 
		cout << "All Elements are Distinct"; 
	} 
	else { 
		cout << "Not all Elements are Distinct"; 
	} 

	return 0; 
} 
