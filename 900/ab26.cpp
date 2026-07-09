#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        bool flag=0;
        while(n%2==0)n/=2;
        n>1?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}