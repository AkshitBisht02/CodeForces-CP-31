#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count=0,result=0;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(arr[i]=='.') {
                result++;
                count++;
            }
            else{
                if(count>=3) {
                    flag=true;
                }
                count=0;
            }
        }
        
                if(count>=3) {
                    flag=true;
                }
        if(flag==true) cout<<2<<endl;
        else cout<<result<<endl;
    }
    return 0;
}