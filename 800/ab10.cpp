#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int sum=0;
	    for(int i=0;i<10;i++){
	        for(int j=0;j<10;j++){
	            char c;
	            cin>>c;
	            if(c=='X'){
	                int val=1+min({i,j,9-i,9-j});
	                sum+=val;
	            }
	        }
	    }
	    cout<<sum<<endl;
	}
    return 0;
}
