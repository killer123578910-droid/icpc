#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> ar(n);
        unordered_map<int,int> freq;
        for(auto &x:ar){
            cin>>x;
        }

        if(ar[0]==1||ar[n-1]==1) cout<<"Alice"<<endl;
        else cout<<"Bob"<<endl;
    }
    return 0;
}