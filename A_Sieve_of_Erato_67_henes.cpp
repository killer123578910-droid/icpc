#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int ok =0;
        while(n--){
            int x;
            cin >> x;
            if(x==67){
                ok=1;
            }
        }
        if(ok==1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}