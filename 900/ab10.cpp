#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>a(n);
        
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        
        
        vector<int>pre(n,0);
        pre[0]=a[0];
        for(int i=1;i<n;i++){
            pre[i]=a[i]+pre[i-1];
        }
        
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            
            long long range = pre[r-1] - (l > 1 ? pre[l-2] : 0);

            long long s=sum-range+(r-l+1)*k;
            
            if(s%2!=0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
