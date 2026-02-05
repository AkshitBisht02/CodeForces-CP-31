#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>arr(n);
	    int same=0,flag=0;
	    
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(i==0) same=arr[i];
	        else if(arr[i]!=same) flag=1;
	        
	    }
	    
	    if(flag==0) cout<<"NO"<<endl;
	    
	    else{
	        cout<<"YES"<<endl;
	        sort(arr.begin(),arr.end());
	        reverse(arr.begin(),arr.end());
	        
	        
	        if(arr[1]==arr[0]){
	            swap(arr[n-1],arr[1]);   
	        }
	        
	        for(int i=0;i<n;i++){
	            cout<<arr[i]<<" ";
	        }
	        cout<<endl;
	    }
	    
	    
	}
}
