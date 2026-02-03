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
	    
	    int c=arr[0];
	    for(int i=1;i<n;i++){
	        c=c^arr[i];
	    }
	    
	    if(n%2==0){
	        if(c==0) cout<<26<<endl;
	        else cout<<-1<<endl;
	    }
	    else{
	        cout<<c<<endl;
	    }
	}

}
