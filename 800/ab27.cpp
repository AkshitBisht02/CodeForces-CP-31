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
	    
	    int c=-2;
	    vector<int> pre(n,0);
	    vector<int> suf(n,0);
	    
	    if(arr[0]==2) pre[0]=1;
	    if(arr[n-1]==2) suf[n-1]=1;
	    
	    for(int i=1;i<n;i++){
	        if(arr[i]==2) pre[i]+=pre[i-1]+1;
	        else pre[i]+=pre[i-1];
	    }
	    for(int i=n-2;i>=0;i--){
	        if(arr[i]==2) suf[i]+=suf[i+1]+1;
	        else suf[i]+=suf[i+1];
	    }
	    
	    for(int i=0;i<n-1;i++){
	        if(pre[i]==suf[i+1]){
	            c=i;
	            break;
	        }
	    }
	    cout<<c+1<<endl;
	}

}
