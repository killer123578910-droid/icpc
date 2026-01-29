#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int s,k,m;
        cin>>s>>k>>m;
        int lat=m/k;
        int soput=0;
        if(s<=k){
            while(lat--){
                soput+=k;
            }
            if(soput<=m) cout<<0<<endl;
            else cout<<soput-k<<endl;
        }else{
            while(lat--){
                soput+=s;
            }
            if(soput<=m) cout<<0<<endl;
            else cout<<soput-k<<endl;
        }
    }
    return 0;
}
