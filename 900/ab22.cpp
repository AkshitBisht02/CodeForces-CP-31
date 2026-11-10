#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long o=0,r=0;
        for (auto a:arr){
            if(a==0) o++;
            if(a==1) r++;
        }
        long long w=pow(2,o)*r;
        cout<<w<<endl;
    }
}