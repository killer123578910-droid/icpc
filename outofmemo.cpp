#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;cin>>t;
    while(t--){
        ll n,m,h;
        cin>>n>>m>>h;
        vector<ll> ar(n);
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        stack<pair<ll,ll>> st;
        for(int i=0;i<m;i++){
            ll x,y;
            cin>>x>>y;
            ar[x-1]+=y;
            st.push({x,y});  
            if(ar[x-1]>h){
                while(!st.empty()){
                    pair<ll,ll> topp=st.top();
                    st.pop();
                    ar[topp.first-1]-=topp.second;
                }
            }
        }
        for(auto x:ar) cout<<x<<" ";
        cout<<endl;
    }
}