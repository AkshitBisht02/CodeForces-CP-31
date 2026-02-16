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
	    
	    int count=0;
	    if(arr[0]!=0) count+=1;
	    for(int i=1;i<n;i++){
	        if(arr[i]!=0 && arr[i-1]==0) count++;
	    }
	    
	    if(count==0) cout<<0<<endl;
	    else if(count==1) cout<<1<<endl;
	    else cout<<2<<endl;
	   
	}
}
