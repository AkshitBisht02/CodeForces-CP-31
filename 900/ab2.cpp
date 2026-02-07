#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    
	    string s;
	    cin>>s;
	    
	    vector<int> hash(26,0);
	    for(int i=0;i<n;i++){
	        hash[s[i]-'a']++;
	    }
	    int count=0;
	    
	    for(int i=0;i<26;i++){
	        if(hash[i]%2!=0) count++;
	    }
	    
	    if(count>k+1) cout<<"NO"<<endl;
	    else cout<<"YES"<<endl;
	}

}
