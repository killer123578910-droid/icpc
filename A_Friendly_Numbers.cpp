#include<bits/stdc++.h>
using namespace std;
int summ(long long x){
    int a=0;
    while(x>0){
        a=a+x%10;
        x/=10;
    }
    return a;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int ans=0;
        long long x;cin>>x;
        for(int i=0;i<=90;i++){
            long long y=x+i;
            if(summ(y)==i){
                ans+=1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}