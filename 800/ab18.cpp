#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,k;
	    cin>>x>>k;
	    vector<int> result;
	    int sum=x,count=0;
	    while(sum){
	        if(x%k!=0){
	            sum-=x;
	            result.push_back(x);
	            x=sum;
	            count++;
	        }
	        else x--;
	    }
	    cout<<count<<endl;
	    for(int i=0;i<count;i++){
	        cout<<result[i]<<" ";
	    }
	    cout<<endl;
	}
}
