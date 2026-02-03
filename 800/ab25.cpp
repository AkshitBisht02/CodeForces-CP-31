#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    string a;
	    cin>>a;
	    
	    int l=0,r=a.length()-1;
	    while(l<r){
	        if(a[l]==a[r]) break;
	        l++;
	        r--;
	    }
	    
	    if(l==r) cout<<1<<endl;
	    else if(l>r) cout<<0<<endl;
	    else cout<<r-l+1<<endl;
	}

}
