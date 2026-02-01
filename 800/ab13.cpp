#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        vector<int>b;
        vector<int>c;
        
        sort(a.begin(),a.end());
        
        b.push_back(a[0]);
        for(int i=1;i<n;i++){
            if(a[i]==b[0]){
                b.push_back(a[i]);
            }
            else c.push_back(a[i]);
        }
        
        if(c.size()==0)  cout<<-1<<endl;
        else {
            int l=b.size(),m=c.size();
            cout<<l<<" "<<m<<endl;
            for(int i=0;i<l;i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<m;i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
    }
}
