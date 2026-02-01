#include<vector>
#include<algorithm>
#include <iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        
        //input array
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>temp;
        temp=arr;
        
        sort(temp.begin(),temp.end());
        if(arr==temp) cout<<"YES";
        else if(k==1) cout<<"NO";
        else cout<<"YES";
        
        cout<<endl;
    }
    return 0;
}