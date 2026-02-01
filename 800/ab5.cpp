#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    vector<int> temp=arr;
	    sort(temp.begin(),temp.end());
	    
	    if(arr[0]!=temp[0] ) cout<<"NO"<<endl;
	    else cout<<"YES"<<endl;
	}
    return 0;
}
