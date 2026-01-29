#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> enumm(n-2);
        int k=n-2;
        for(auto &x:enumm){
            x=k--;
        }
        vector<int> ans;
        ans.push_back(1);
        ans.push_back(n);
        int dem=0;
        for(auto x:enumm){
            if(dem==0){
                int temp=ans.back()-x;
                ans.push_back(temp);
                dem++;
            }else{
                int temp=ans.back()+x;
                ans.push_back(temp);
                dem--;
            }
        }
        for(int i=ans.size()-1;i>=0;i--){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}