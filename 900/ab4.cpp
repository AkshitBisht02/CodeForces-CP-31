#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,n;
	    cin>>a>>b>>n;
	    vector<int> arr(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    long long result=0;
	    for(int i=0;i<n;i++){
	        result+=b-1;
	        b=1;
	        b+=arr[i];
	        b=min(b,a);
	    }
	    result+=b;
	    cout<<result<<endl;
	}
}
