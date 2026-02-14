#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	     int n;
	     cin>>n;
	     
	     string s;
	     cin>>s;
	     
	     int curr=1,result=1;
	     for(int i=1;i<n;i++){
	         if(s[i]==s[i-1]) curr++;
	         else curr=1;
	         result=max(result,curr);
	     }
	     
	     cout<<result+1<<endl;
	}
}
