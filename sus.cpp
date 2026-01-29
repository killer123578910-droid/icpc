#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long cnt=0;
        if(s[0]=='u') cnt++,s[0]='s';
        if(s[s.size()-1]=='u') cnt++,s[s.size()-1]='s'; 
        for(int i=1;i<s.size()-1;i++){
            if(s[i]=='u'&&s[i-1]=='u') cnt++,s[i]='s';
        }
        cout<<cnt<<endl;
    }
    return 0;
}