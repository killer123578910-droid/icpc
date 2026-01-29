#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt=0;
        for(auto x:s){
            if(x=='Y'){
                cnt++;
            }
            if(cnt>1){
                break;
            }
        }
        cout<<(cnt<=1?"YES":"NO")<<endl;
    }
    return 0;
}