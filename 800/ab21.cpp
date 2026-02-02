#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    int count=0,result=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]==0){
	            count++;
	        }
	        else {
	            result=max(result,count);
	           count=0; 
	        }
	    }
	    result=max(result,count);
	    cout<<result<<endl;
	}
}
