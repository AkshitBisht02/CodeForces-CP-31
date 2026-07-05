#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        unordered_map<int,int> map;
        int ma=1;
        for(int i=0;i<n;i++){
            map[arr[i]]++;
            ma=max(ma,map[arr[i]]);
        }
        int count=0;
        while(ma<n){
            int temp=ma;
            count+=1;
            if(n-ma>temp){
                count+=temp;
            }
            else{
                count+=n-ma;
            }
            ma*=2;
        }
        cout<<count<<endl;
    }
    return 0;
}