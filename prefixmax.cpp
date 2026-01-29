#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        int mmax=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mmax=max(mmax,x);
        }
        cout<<mmax*n<<endl;
    }
    return 0;
}