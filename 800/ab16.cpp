#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,flag=0;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i!=0 && a[i]<a[i-1]) flag=1;
        }
        if(flag) cout<<0<<endl;
        else{
            int diff=INT_MAX;
            for(int i=0;i<n-1;i++){
                diff=min(diff,(a[i+1]-a[i]));
            } 
            cout<<(diff/2)+1<<endl;
        }
    }
    return 0;
}
