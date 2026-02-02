#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    
	    int pos=0,neg=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]==1) pos++;
	        else neg++;
	    }
	    int count=0;
	    while(neg>pos){
	        neg--;
	        count++;
	        pos++;
	    }
	    if(neg%2!=0){
	        count++;
	    }
	    
	    
	    cout<<count<<endl;
	}
}
