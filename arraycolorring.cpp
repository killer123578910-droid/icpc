#include<bits/stdc++.h>
using namespace std;
string check(vector<int> ar){
    for(int i=0;i<ar.size()-1;i++){
        if((ar[i]%2==0&&ar[i+1]%2==0)||(ar[i]%2!=0&&ar[i+1]%2!=0)){
            return "NO";
        }
    }
    return "YES";
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> ar(n);
        for(int i=0;i<ar.size();i++) cin>>ar[i];
        cout<<check(ar)<<endl;
    }
    return 0;
}