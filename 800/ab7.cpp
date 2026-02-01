#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    string x,s;
	    cin>>x;
	    cin>>s;
	    
	    int count=0;
	    while(x.find(s)==string::npos && x.size() <= s.size()){
	        count++;
	        x+=x;
	    }
	    if(x.find(s)==string::npos) {
	        count++;
	        x+=x;
	    }
	    if(x.find(s)==string::npos) cout<<-1<<endl;
	    else cout<<count<<endl;
	    
	}
    return 0;
}
