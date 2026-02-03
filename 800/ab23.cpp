#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    
	    if(d<b) cout<<-1<<endl;
	    else{
	        int count=0;
	        while(b!=d){
	            b++;
	            a++;
	            count++;
	        }
	        if(a<c) cout<<-1<<endl;
	        else{
	            while(c!=a){
	                a--;
	                count++;
                }
                cout<<count<<endl;
	        }
	        
	    }
	    
	}

}
