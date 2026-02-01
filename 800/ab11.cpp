#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int>arr(n);
	
	int result=INT_MAX;
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	    result=min(result,abs(arr[i]));
	}
	 
	cout<<result; 
	  
    return 0;
}
