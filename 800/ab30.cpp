#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    string a=to_string(n);
	    
	    int result=(a.length()-1)*9;  // per digit 9 values
	    
	    result+=a[0]-'0';   // round values in current number
	    
	    cout<<result<<endl;
	    
	    
	}
    return 0;
}
