#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    
	    long long i;
	    for(i=1;i<=n;i++){
	        if(n%i!=0) break;
	    }
	    
	    cout<<i-1<<endl;
	}

}
