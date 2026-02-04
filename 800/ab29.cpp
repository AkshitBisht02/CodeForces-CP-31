#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<long long> arr(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int count=0;
	    for(int i=0;i<arr.size()-1;i++){
	        int a=arr[i]%2;
	        int b=arr[i+1]%2;
	        if(a==b){
	            arr[i]=a;
	            arr.erase(arr.begin()+i+1);
	            i--;
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}

}
