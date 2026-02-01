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
	    
	    int a=arr[0],b=0,c1=0,c2=0;
	    bool flag=true;
	    for(int i=0;i<n;i++){
	        if(arr[i]!=a && b==0){
	            b=arr[i];
	        }
	        if(arr[i]==a) c1++;
	        else if(arr[i]==b) c2++;
	        else flag=false;
	    }
	    
	    if(c2==0) cout<<"YES"<<endl;
	    else if(flag && (c1==c2 || abs(c1-c2)==1 )) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
    return 0;
}
